#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\CameraData.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::CameraData::*)(::UnityEngine::Rendering::ContextContainer*)>(
    &::UnityEngine::Rendering::Universal::CameraData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e3d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_universalCameraData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::UniversalCameraData* (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_universalCameraData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x68e3d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_universalCameraData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.SetViewAndProjectionMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::CameraData::*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::Universal::CameraData::SetViewAndProjectionMatrix)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x68e3dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(),
                                                             { "SetViewAndProjectionMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.SetViewProjectionAndJitterMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::CameraData::*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::Universal::CameraData::SetViewProjectionAndJitterMatrix)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x68e3ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(),
            { "SetViewProjectionAndJitterMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.PushBuiltinShaderConstantsXR
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::CameraData::*)(::UnityEngine::Rendering::RasterCommandBuffer*, bool)>(
    &::UnityEngine::Rendering::Universal::CameraData::PushBuiltinShaderConstantsXR)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x68e3f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(),
                                                             { "PushBuiltinShaderConstantsXR", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.GetViewMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Rendering::Universal::CameraData::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::CameraData::GetViewMatrix)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x68e3fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "GetViewMatrix", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.GetProjectionMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Rendering::Universal::CameraData::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::CameraData::GetProjectionMatrix)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x68e4080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "GetProjectionMatrix", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.GetProjectionMatrixNoJitter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Rendering::Universal::CameraData::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::CameraData::GetProjectionMatrixNoJitter)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x68e4114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "GetProjectionMatrixNoJitter", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.GetGPUProjectionMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Rendering::Universal::CameraData::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::CameraData::GetGPUProjectionMatrix)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x68e41a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "GetGPUProjectionMatrix", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.GetGPUProjectionMatrixNoJitter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Rendering::Universal::CameraData::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::CameraData::GetGPUProjectionMatrixNoJitter)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x68e423c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "GetGPUProjectionMatrixNoJitter", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.GetGPUProjectionMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Rendering::Universal::CameraData::*)(bool, int32_t)>(
    &::UnityEngine::Rendering::Universal::CameraData::GetGPUProjectionMatrix)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x68e42d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "GetGPUProjectionMatrix", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_camera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityW<::UnityEngine::Camera>> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_camera)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e4374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_camera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_historyManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraHistory*> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_historyManager)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e43d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_historyManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_renderType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::Universal::CameraRenderType> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_renderType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e4434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_renderType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_targetTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityW<::UnityEngine::RenderTexture>> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_targetTexture)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e4494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_targetTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_cameraTargetDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::RenderTextureDescriptor> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_cameraTargetDescriptor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e44f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_cameraTargetDescriptor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_pixelRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rect> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_pixelRect)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e4554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_pixelRect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_useScreenCoordOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_useScreenCoordOverride)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e45b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_useScreenCoordOverride", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_screenSizeOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Vector4> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_screenSizeOverride)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e4614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_screenSizeOverride", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_screenCoordScaleBias
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Vector4> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_screenCoordScaleBias)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e4674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_screenCoordScaleBias", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_pixelWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<int32_t> (::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_pixelWidth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e46d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_pixelWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_pixelHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<int32_t> (::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_pixelHeight)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e4734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_pixelHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_aspectRatio
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<float_t> (::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_aspectRatio)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e4794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_aspectRatio", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_renderScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<float_t> (::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_renderScale)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e47f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_renderScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_imageScalingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::Universal::ImageScalingMode> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_imageScalingMode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e4854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_imageScalingMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_upscalingFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::Universal::ImageUpscalingFilter> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_upscalingFilter)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e48b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_upscalingFilter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_fsrOverrideSharpness
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_fsrOverrideSharpness)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e4914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_fsrOverrideSharpness", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_fsrSharpness
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<float_t> (::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_fsrSharpness)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e4974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_fsrSharpness", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_hdrColorBufferPrecision
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::Universal::HDRColorBufferPrecision> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_hdrColorBufferPrecision)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e49d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_hdrColorBufferPrecision", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_clearDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_clearDepth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e4a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_clearDepth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_cameraType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::CameraType> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_cameraType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e4a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_cameraType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_isDefaultViewport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_isDefaultViewport)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e4af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_isDefaultViewport", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_isHdrEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_isHdrEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e4b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_isHdrEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_allowHDROutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_allowHDROutput)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e4bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_allowHDROutput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_isAlphaOutputEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_isAlphaOutputEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e4c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_isAlphaOutputEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_requiresDepthTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_requiresDepthTexture)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e4c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_requiresDepthTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_requiresOpaqueTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_requiresOpaqueTexture)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e4cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_requiresOpaqueTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_postProcessingRequiresDepthTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_postProcessingRequiresDepthTexture)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e4d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_postProcessingRequiresDepthTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_xrRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_xrRendering)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e4d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_xrRendering", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_requireSrgbConversion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_requireSrgbConversion)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e4df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_requireSrgbConversion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_isSceneViewCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_isSceneViewCamera)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x68e4e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_isSceneViewCamera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_isPreviewCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_isPreviewCamera)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x68e4ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_isPreviewCamera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_isRenderPassSupportedCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_isRenderPassSupportedCamera)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x68e4f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_isRenderPassSupportedCamera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_resolveToScreen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_resolveToScreen)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e4f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_resolveToScreen", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_isHDROutputActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_isHDROutputActive)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e4ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_isHDROutputActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_hdrDisplayInformation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_hdrDisplayInformation)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e5050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_hdrDisplayInformation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_hdrDisplayColorGamut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ColorGamut (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_hdrDisplayColorGamut)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e50b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_hdrDisplayColorGamut", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_rendersOverlayUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_rendersOverlayUI)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e5110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_rendersOverlayUI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.IsHandleYFlipped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::CameraData::IsHandleYFlipped)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x68e5170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "IsHandleYFlipped", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.IsCameraProjectionMatrixFlipped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::IsCameraProjectionMatrixFlipped)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e51e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "IsCameraProjectionMatrixFlipped", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.IsRenderTargetProjectionMatrixFlipped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)(::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::CameraData::IsRenderTargetProjectionMatrixFlipped)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x68e5240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(),
                            { "IsRenderTargetProjectionMatrixFlipped", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.IsTemporalAAEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::IsTemporalAAEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e52b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "IsTemporalAAEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_defaultOpaqueSortFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::SortingCriteria> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_defaultOpaqueSortFlags)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e5318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_defaultOpaqueSortFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_xr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::XRPass* (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_xr)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e5378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_xr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.set_xr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::CameraData::*)(::UnityEngine::Experimental::Rendering::XRPass*)>(
    &::UnityEngine::Rendering::Universal::CameraData::set_xr)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x68e53d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "set_xr", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_xrUniversal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::XRPassUniversal* (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_xrUniversal)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e5444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_xrUniversal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_maxShadowDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<float_t> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_maxShadowDistance)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e54a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_maxShadowDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_postProcessEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_postProcessEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e5504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_postProcessEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_captureActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::by_ref<::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*> (
        ::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_captureActions)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e5564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_captureActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_volumeLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::LayerMask> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_volumeLayerMask)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e55c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_volumeLayerMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_volumeTrigger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityW<::UnityEngine::Transform>> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_volumeTrigger)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e5624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_volumeTrigger", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_isStopNaNEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_isStopNaNEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e5684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_isStopNaNEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_isDitheringEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_isDitheringEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e56e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_isDitheringEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_antialiasing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::Universal::AntialiasingMode> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_antialiasing)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e5744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_antialiasing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_antialiasingQuality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::Universal::AntialiasingQuality> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_antialiasingQuality)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e57a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_antialiasingQuality", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_renderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::Universal::ScriptableRenderer*> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_renderer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e5804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_renderer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_resolveFinalTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_resolveFinalTarget)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e5864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_resolveFinalTarget", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_worldSpaceCameraPos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Vector3> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_worldSpaceCameraPos)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e58c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_worldSpaceCameraPos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_backgroundColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Color> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_backgroundColor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e5924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_backgroundColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_taaHistory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::Universal::TaaHistory*> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_taaHistory)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e5984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_taaHistory", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_taaSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::Universal::TemporalAA_Settings> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_taaSettings)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e59e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_taaSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_resetHistory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_resetHistory)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x68e5a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_resetHistory", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_baseCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityW<::UnityEngine::Camera>> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_baseCamera)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e5aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_baseCamera", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::CameraData::_ctor(::UnityEngine::Rendering::ContextContainer* frameData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, frameData);
}
inline ::UnityEngine::Rendering::Universal::UniversalCameraData* UnityEngine::Rendering::Universal::CameraData::get_universalCameraData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_universalCameraData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::UniversalCameraData*>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::CameraData::SetViewAndProjectionMatrix(::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(),
                                                           { "SetViewAndProjectionMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, viewMatrix, projectionMatrix);
}
inline void UnityEngine::Rendering::Universal::CameraData::SetViewProjectionAndJitterMatrix(::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix,
                                                                                            ::UnityEngine::Matrix4x4 jitterMatrix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(),
          { "SetViewProjectionAndJitterMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, viewMatrix, projectionMatrix, jitterMatrix);
}
inline void UnityEngine::Rendering::Universal::CameraData::PushBuiltinShaderConstantsXR(::UnityEngine::Rendering::RasterCommandBuffer* cmd, bool renderIntoTexture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(),
                                                           { "PushBuiltinShaderConstantsXR", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cmd, renderIntoTexture);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::CameraData::GetViewMatrix(int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "GetViewMatrix", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(*this, ___internal_method, viewIndex);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::CameraData::GetProjectionMatrix(int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "GetProjectionMatrix", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(*this, ___internal_method, viewIndex);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::CameraData::GetProjectionMatrixNoJitter(int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "GetProjectionMatrixNoJitter", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(*this, ___internal_method, viewIndex);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::CameraData::GetGPUProjectionMatrix(int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "GetGPUProjectionMatrix", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(*this, ___internal_method, viewIndex);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::CameraData::GetGPUProjectionMatrixNoJitter(int32_t viewIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "GetGPUProjectionMatrixNoJitter", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(*this, ___internal_method, viewIndex);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::CameraData::GetGPUProjectionMatrix(bool renderIntoTexture, int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "GetGPUProjectionMatrix", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(*this, ___internal_method, renderIntoTexture, viewIndex);
}
inline ::by_ref<::UnityW<::UnityEngine::Camera>> UnityEngine::Rendering::Universal::CameraData::get_camera() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_camera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityW<::UnityEngine::Camera>>>(*this, ___internal_method);
}
inline ::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraHistory*> UnityEngine::Rendering::Universal::CameraData::get_historyManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_historyManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>>(*this, ___internal_method);
}
inline ::by_ref<::UnityEngine::Rendering::Universal::CameraRenderType> UnityEngine::Rendering::Universal::CameraData::get_renderType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_renderType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::Universal::CameraRenderType>>(*this, ___internal_method);
}
inline ::by_ref<::UnityW<::UnityEngine::RenderTexture>> UnityEngine::Rendering::Universal::CameraData::get_targetTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_targetTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityW<::UnityEngine::RenderTexture>>>(*this, ___internal_method);
}
inline ::by_ref<::UnityEngine::RenderTextureDescriptor> UnityEngine::Rendering::Universal::CameraData::get_cameraTargetDescriptor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_cameraTargetDescriptor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::RenderTextureDescriptor>>(*this, ___internal_method);
}
inline ::by_ref<::UnityEngine::Rect> UnityEngine::Rendering::Universal::CameraData::get_pixelRect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_pixelRect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rect>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::CameraData::get_useScreenCoordOverride() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_useScreenCoordOverride", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<::UnityEngine::Vector4> UnityEngine::Rendering::Universal::CameraData::get_screenSizeOverride() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_screenSizeOverride", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Vector4>>(*this, ___internal_method);
}
inline ::by_ref<::UnityEngine::Vector4> UnityEngine::Rendering::Universal::CameraData::get_screenCoordScaleBias() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_screenCoordScaleBias", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Vector4>>(*this, ___internal_method);
}
inline ::by_ref<int32_t> UnityEngine::Rendering::Universal::CameraData::get_pixelWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_pixelWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<int32_t>>(*this, ___internal_method);
}
inline ::by_ref<int32_t> UnityEngine::Rendering::Universal::CameraData::get_pixelHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_pixelHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<int32_t>>(*this, ___internal_method);
}
inline ::by_ref<float_t> UnityEngine::Rendering::Universal::CameraData::get_aspectRatio() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_aspectRatio", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<float_t>>(*this, ___internal_method);
}
inline ::by_ref<float_t> UnityEngine::Rendering::Universal::CameraData::get_renderScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_renderScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<float_t>>(*this, ___internal_method);
}
inline ::by_ref<::UnityEngine::Rendering::Universal::ImageScalingMode> UnityEngine::Rendering::Universal::CameraData::get_imageScalingMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_imageScalingMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::Universal::ImageScalingMode>>(*this, ___internal_method);
}
inline ::by_ref<::UnityEngine::Rendering::Universal::ImageUpscalingFilter> UnityEngine::Rendering::Universal::CameraData::get_upscalingFilter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_upscalingFilter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::Universal::ImageUpscalingFilter>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::CameraData::get_fsrOverrideSharpness() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_fsrOverrideSharpness", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<float_t> UnityEngine::Rendering::Universal::CameraData::get_fsrSharpness() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_fsrSharpness", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<float_t>>(*this, ___internal_method);
}
inline ::by_ref<::UnityEngine::Rendering::Universal::HDRColorBufferPrecision> UnityEngine::Rendering::Universal::CameraData::get_hdrColorBufferPrecision() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_hdrColorBufferPrecision", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::Universal::HDRColorBufferPrecision>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::CameraData::get_clearDepth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_clearDepth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<::UnityEngine::CameraType> UnityEngine::Rendering::Universal::CameraData::get_cameraType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_cameraType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::CameraType>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::CameraData::get_isDefaultViewport() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_isDefaultViewport", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::CameraData::get_isHdrEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_isHdrEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::CameraData::get_allowHDROutput() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_allowHDROutput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::CameraData::get_isAlphaOutputEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_isAlphaOutputEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::CameraData::get_requiresDepthTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_requiresDepthTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::CameraData::get_requiresOpaqueTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_requiresOpaqueTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::CameraData::get_postProcessingRequiresDepthTexture() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_postProcessingRequiresDepthTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::CameraData::get_xrRendering() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_xrRendering", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::CameraData::get_requireSrgbConversion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_requireSrgbConversion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::CameraData::get_isSceneViewCamera() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_isSceneViewCamera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::CameraData::get_isPreviewCamera() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_isPreviewCamera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::CameraData::get_isRenderPassSupportedCamera() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_isRenderPassSupportedCamera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::CameraData::get_resolveToScreen() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_resolveToScreen", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::CameraData::get_isHDROutputActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_isHDROutputActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation UnityEngine::Rendering::Universal::CameraData::get_hdrDisplayInformation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_hdrDisplayInformation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation>(*this, ___internal_method);
}
inline ::UnityEngine::ColorGamut UnityEngine::Rendering::Universal::CameraData::get_hdrDisplayColorGamut() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_hdrDisplayColorGamut", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ColorGamut>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::CameraData::get_rendersOverlayUI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_rendersOverlayUI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::CameraData::IsHandleYFlipped(::UnityEngine::Rendering::RTHandle* handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "IsHandleYFlipped", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, handle);
}
inline bool UnityEngine::Rendering::Universal::CameraData::IsCameraProjectionMatrixFlipped() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "IsCameraProjectionMatrixFlipped", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::CameraData::IsRenderTargetProjectionMatrixFlipped(::UnityEngine::Rendering::RTHandle* color, ::UnityEngine::Rendering::RTHandle* depth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(),
                          { "IsRenderTargetProjectionMatrixFlipped", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, color, depth);
}
inline bool UnityEngine::Rendering::Universal::CameraData::IsTemporalAAEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "IsTemporalAAEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::by_ref<::UnityEngine::Rendering::SortingCriteria> UnityEngine::Rendering::Universal::CameraData::get_defaultOpaqueSortFlags() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_defaultOpaqueSortFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::SortingCriteria>>(*this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::XRPass* UnityEngine::Rendering::Universal::CameraData::get_xr() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_xr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::XRPass*>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::CameraData::set_xr(::UnityEngine::Experimental::Rendering::XRPass* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "set_xr", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::XRPassUniversal* UnityEngine::Rendering::Universal::CameraData::get_xrUniversal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_xrUniversal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::XRPassUniversal*>(*this, ___internal_method);
}
inline ::by_ref<float_t> UnityEngine::Rendering::Universal::CameraData::get_maxShadowDistance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_maxShadowDistance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<float_t>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::CameraData::get_postProcessEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_postProcessEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*>
UnityEngine::Rendering::Universal::CameraData::get_captureActions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_captureActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<
      ::by_ref<::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*>>(*this,
                                                                                                                                                                                 ___internal_method);
}
inline ::by_ref<::UnityEngine::LayerMask> UnityEngine::Rendering::Universal::CameraData::get_volumeLayerMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_volumeLayerMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::LayerMask>>(*this, ___internal_method);
}
inline ::by_ref<::UnityW<::UnityEngine::Transform>> UnityEngine::Rendering::Universal::CameraData::get_volumeTrigger() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_volumeTrigger", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityW<::UnityEngine::Transform>>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::CameraData::get_isStopNaNEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_isStopNaNEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::CameraData::get_isDitheringEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_isDitheringEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<::UnityEngine::Rendering::Universal::AntialiasingMode> UnityEngine::Rendering::Universal::CameraData::get_antialiasing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_antialiasing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::Universal::AntialiasingMode>>(*this, ___internal_method);
}
inline ::by_ref<::UnityEngine::Rendering::Universal::AntialiasingQuality> UnityEngine::Rendering::Universal::CameraData::get_antialiasingQuality() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_antialiasingQuality", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::Universal::AntialiasingQuality>>(*this, ___internal_method);
}
inline ::by_ref<::UnityEngine::Rendering::Universal::ScriptableRenderer*> UnityEngine::Rendering::Universal::CameraData::get_renderer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_renderer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::Universal::ScriptableRenderer*>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::CameraData::get_resolveFinalTarget() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_resolveFinalTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<::UnityEngine::Vector3> UnityEngine::Rendering::Universal::CameraData::get_worldSpaceCameraPos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_worldSpaceCameraPos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Vector3>>(*this, ___internal_method);
}
inline ::by_ref<::UnityEngine::Color> UnityEngine::Rendering::Universal::CameraData::get_backgroundColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_backgroundColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Color>>(*this, ___internal_method);
}
inline ::by_ref<::UnityEngine::Rendering::Universal::TaaHistory*> UnityEngine::Rendering::Universal::CameraData::get_taaHistory() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_taaHistory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::Universal::TaaHistory*>>(*this, ___internal_method);
}
inline ::by_ref<::UnityEngine::Rendering::Universal::TemporalAA_Settings> UnityEngine::Rendering::Universal::CameraData::get_taaSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_taaSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::Universal::TemporalAA_Settings>>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::CameraData::get_resetHistory() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_resetHistory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::by_ref<::UnityW<::UnityEngine::Camera>> UnityEngine::Rendering::Universal::CameraData::get_baseCamera() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraData>(), { "get_baseCamera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityW<::UnityEngine::Camera>>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "frameData", ty: "::UnityEngine::Rendering::ContextContainer*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::CameraData::CameraData(::UnityEngine::Rendering::ContextContainer* frameData) noexcept {
  this->frameData = frameData;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::CameraData::CameraData() {}
