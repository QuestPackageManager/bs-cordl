#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalCameraData.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingQuality_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraRenderType_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__HDRColorBufferPrecision_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ImageScalingMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ImageUpscalingFilter_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TemporalAA_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ContextItem_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SortingCriteria_impl.hpp"
#include "UnityEngine/zzzz__CameraType_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__StpHistory_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TaaHistory_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraHistory_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRPassUniversal_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__HDROutputUtils_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__ColorGamut_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.SetViewAndProjectionMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalCameraData::*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::SetViewAndProjectionMatrix)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6870234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                             { "SetViewAndProjectionMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.SetViewProjectionAndJitterMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalCameraData::*)(
    ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(&::UnityEngine::Rendering::Universal::UniversalCameraData::SetViewProjectionAndJitterMatrix)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x68702b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
            { "SetViewProjectionAndJitterMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.PushBuiltinShaderConstantsXR
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalCameraData::*)(::UnityEngine::Rendering::RasterCommandBuffer*, bool)>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::PushBuiltinShaderConstantsXR)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x68702e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                             { "PushBuiltinShaderConstantsXR", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.GetViewMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Rendering::Universal::UniversalCameraData::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::GetViewMatrix)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x68706a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "GetViewMatrix", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.GetProjectionMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Rendering::Universal::UniversalCameraData::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::GetProjectionMatrix)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x68705ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "GetProjectionMatrix", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.GetProjectionMatrixNoJitter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Rendering::Universal::UniversalCameraData::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::GetProjectionMatrixNoJitter)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6870724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "GetProjectionMatrixNoJitter", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.GetGPUProjectionMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Rendering::Universal::UniversalCameraData::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::GetGPUProjectionMatrix)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x68707a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "GetGPUProjectionMatrix", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.GetGPUProjectionMatrixNoJitter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Rendering::Universal::UniversalCameraData::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::GetGPUProjectionMatrixNoJitter)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6870960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "GetGPUProjectionMatrixNoJitter", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.GetGPUProjectionMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Rendering::Universal::UniversalCameraData::*)(bool, int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::GetGPUProjectionMatrix)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x68709ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                                                           { "GetGPUProjectionMatrix", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.get_scaledWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::UniversalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::get_scaledWidth)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6870ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_scaledWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.get_scaledHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::UniversalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::get_scaledHeight)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6870b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_scaledHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.get_historyManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::UniversalCameraHistory* (::UnityEngine::Rendering::Universal::UniversalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::get_historyManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6870b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_historyManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.set_historyManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalCameraData::*)(::UnityEngine::Rendering::Universal::UniversalCameraHistory*)>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::set_historyManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6870b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                             { "set_historyManager", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.get_requireSrgbConversion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::get_requireSrgbConversion)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6870b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_requireSrgbConversion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.get_isGameCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::get_isGameCamera)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6870ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_isGameCamera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.get_isSceneViewCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::get_isSceneViewCamera)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6870cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_isSceneViewCamera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.get_isPreviewCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::get_isPreviewCamera)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6870cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_isPreviewCamera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.get_isRenderPassSupportedCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::get_isRenderPassSupportedCamera)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6870cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_isRenderPassSupportedCamera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.get_resolveToScreen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::get_resolveToScreen)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6870d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_resolveToScreen", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.get_isHDROutputActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::get_isHDROutputActive)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6870dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_isHDROutputActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.get_hdrDisplayInformation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation (::UnityEngine::Rendering::Universal::UniversalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::get_hdrDisplayInformation)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6870e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_hdrDisplayInformation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.get_hdrDisplayColorGamut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ColorGamut (::UnityEngine::Rendering::Universal::UniversalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::get_hdrDisplayColorGamut)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6870f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_hdrDisplayColorGamut", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.get_rendersOverlayUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::get_rendersOverlayUI)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6870fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_rendersOverlayUI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.IsHandleYFlipped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalCameraData::*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::IsHandleYFlipped)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6871068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                                                           { "IsHandleYFlipped", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.IsCameraProjectionMatrixFlipped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::IsCameraProjectionMatrixFlipped)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6870870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "IsCameraProjectionMatrixFlipped", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.IsRenderTargetProjectionMatrixFlipped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalCameraData::*)(::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::IsRenderTargetProjectionMatrixFlipped)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x687115c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                            { "IsRenderTargetProjectionMatrixFlipped", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.IsTemporalAARequested
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::IsTemporalAARequested)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x687121c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "IsTemporalAARequested", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.IsTemporalAAEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::IsTemporalAAEnabled)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x687122c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "IsTemporalAAEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.IsSTPRequested
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::IsSTPRequested)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6871330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "IsSTPRequested", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.IsSTPEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalCameraData::*)()>(&::UnityEngine::Rendering::Universal::UniversalCameraData::IsSTPEnabled)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6871354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "IsSTPEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.get_xr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::XRPass* (::UnityEngine::Rendering::Universal::UniversalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::get_xr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6871378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_xr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.set_xr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalCameraData::*)(::UnityEngine::Experimental::Rendering::XRPass*)>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::set_xr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6871380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                                                           { "set_xr", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.get_xrUniversal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::XRPassUniversal* (::UnityEngine::Rendering::Universal::UniversalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::get_xrUniversal)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x686e344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_xrUniversal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.get_resetHistory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalCameraData::get_resetHistory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6871388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_resetHistory", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalCameraData::*)()>(&::UnityEngine::Rendering::Universal::UniversalCameraData::Reset)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6871398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalCameraData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalCameraData::*)()>(&::UnityEngine::Rendering::Universal::UniversalCameraData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6871454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Matrix4x4& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_m_ViewMatrix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ViewMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_m_ViewMatrix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ViewMatrix;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_m_ViewMatrix(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ViewMatrix = value;
}
constexpr ::UnityEngine::Matrix4x4& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_m_ProjectionMatrix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProjectionMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_m_ProjectionMatrix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProjectionMatrix;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_m_ProjectionMatrix(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProjectionMatrix = value;
}
constexpr ::UnityEngine::Matrix4x4& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_m_JitterMatrix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_JitterMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_m_JitterMatrix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_JitterMatrix;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_m_JitterMatrix(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_JitterMatrix = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_m_CachedRenderIntoTextureXR() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedRenderIntoTextureXR;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_m_CachedRenderIntoTextureXR() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedRenderIntoTextureXR;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_m_CachedRenderIntoTextureXR(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedRenderIntoTextureXR = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_m_InitBuiltinXRConstants() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InitBuiltinXRConstants;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_m_InitBuiltinXRConstants() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InitBuiltinXRConstants;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_m_InitBuiltinXRConstants(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InitBuiltinXRConstants = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___camera;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_camera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___camera = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraHistory*& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_m_HistoryManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HistoryManager;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraHistory* const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_m_HistoryManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HistoryManager;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_m_HistoryManager(::UnityEngine::Rendering::Universal::UniversalCameraHistory* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HistoryManager = value;
}
constexpr ::UnityEngine::Rendering::Universal::CameraRenderType& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_renderType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderType;
}
constexpr ::UnityEngine::Rendering::Universal::CameraRenderType const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_renderType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderType;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_renderType(::UnityEngine::Rendering::Universal::CameraRenderType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderType = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_targetTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_targetTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetTexture;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_targetTexture(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetTexture = value;
}
constexpr ::UnityEngine::RenderTextureDescriptor& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_cameraTargetDescriptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraTargetDescriptor;
}
constexpr ::UnityEngine::RenderTextureDescriptor const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_cameraTargetDescriptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraTargetDescriptor;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_cameraTargetDescriptor(::UnityEngine::RenderTextureDescriptor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraTargetDescriptor = value;
}
constexpr ::UnityEngine::Rect& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_pixelRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pixelRect;
}
constexpr ::UnityEngine::Rect const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_pixelRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pixelRect;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_pixelRect(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pixelRect = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_useScreenCoordOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useScreenCoordOverride;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_useScreenCoordOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useScreenCoordOverride;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_useScreenCoordOverride(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useScreenCoordOverride = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_screenSizeOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenSizeOverride;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_screenSizeOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenSizeOverride;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_screenSizeOverride(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___screenSizeOverride = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_screenCoordScaleBias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenCoordScaleBias;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_screenCoordScaleBias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenCoordScaleBias;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_screenCoordScaleBias(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___screenCoordScaleBias = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_pixelWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pixelWidth;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_pixelWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pixelWidth;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_pixelWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pixelWidth = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_pixelHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pixelHeight;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_pixelHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pixelHeight;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_pixelHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pixelHeight = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_aspectRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aspectRatio;
}
constexpr float_t const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_aspectRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aspectRatio;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_aspectRatio(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___aspectRatio = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_renderScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderScale;
}
constexpr float_t const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_renderScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderScale;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_renderScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderScale = value;
}
constexpr ::UnityEngine::Rendering::Universal::ImageScalingMode& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_imageScalingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___imageScalingMode;
}
constexpr ::UnityEngine::Rendering::Universal::ImageScalingMode const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_imageScalingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___imageScalingMode;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_imageScalingMode(::UnityEngine::Rendering::Universal::ImageScalingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___imageScalingMode = value;
}
constexpr ::UnityEngine::Rendering::Universal::ImageUpscalingFilter& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_upscalingFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upscalingFilter;
}
constexpr ::UnityEngine::Rendering::Universal::ImageUpscalingFilter const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_upscalingFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upscalingFilter;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_upscalingFilter(::UnityEngine::Rendering::Universal::ImageUpscalingFilter value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___upscalingFilter = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_fsrOverrideSharpness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fsrOverrideSharpness;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_fsrOverrideSharpness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fsrOverrideSharpness;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_fsrOverrideSharpness(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fsrOverrideSharpness = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_fsrSharpness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fsrSharpness;
}
constexpr float_t const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_fsrSharpness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fsrSharpness;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_fsrSharpness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fsrSharpness = value;
}
constexpr ::UnityEngine::Rendering::Universal::HDRColorBufferPrecision& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_hdrColorBufferPrecision() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hdrColorBufferPrecision;
}
constexpr ::UnityEngine::Rendering::Universal::HDRColorBufferPrecision const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_hdrColorBufferPrecision() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hdrColorBufferPrecision;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_hdrColorBufferPrecision(::UnityEngine::Rendering::Universal::HDRColorBufferPrecision value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hdrColorBufferPrecision = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_clearDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearDepth;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_clearDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearDepth;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_clearDepth(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clearDepth = value;
}
constexpr ::UnityEngine::CameraType& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_cameraType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraType;
}
constexpr ::UnityEngine::CameraType const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_cameraType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraType;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_cameraType(::UnityEngine::CameraType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraType = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_isDefaultViewport() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDefaultViewport;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_isDefaultViewport() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDefaultViewport;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_isDefaultViewport(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isDefaultViewport = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_isHdrEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isHdrEnabled;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_isHdrEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isHdrEnabled;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_isHdrEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isHdrEnabled = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_allowHDROutput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowHDROutput;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_allowHDROutput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowHDROutput;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_allowHDROutput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allowHDROutput = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_isAlphaOutputEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isAlphaOutputEnabled;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_isAlphaOutputEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isAlphaOutputEnabled;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_isAlphaOutputEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isAlphaOutputEnabled = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_requiresDepthTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requiresDepthTexture;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_requiresDepthTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requiresDepthTexture;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_requiresDepthTexture(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requiresDepthTexture = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_requiresOpaqueTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requiresOpaqueTexture;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_requiresOpaqueTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requiresOpaqueTexture;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_requiresOpaqueTexture(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requiresOpaqueTexture = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_postProcessingRequiresDepthTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postProcessingRequiresDepthTexture;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_postProcessingRequiresDepthTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postProcessingRequiresDepthTexture;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_postProcessingRequiresDepthTexture(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___postProcessingRequiresDepthTexture = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_xrRendering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrRendering;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_xrRendering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrRendering;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_xrRendering(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xrRendering = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_useGPUOcclusionCulling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useGPUOcclusionCulling;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_useGPUOcclusionCulling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useGPUOcclusionCulling;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_useGPUOcclusionCulling(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useGPUOcclusionCulling = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_stackLastCameraOutputToHDR() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stackLastCameraOutputToHDR;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_stackLastCameraOutputToHDR() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stackLastCameraOutputToHDR;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_stackLastCameraOutputToHDR(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stackLastCameraOutputToHDR = value;
}
constexpr ::UnityEngine::Rendering::SortingCriteria& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_defaultOpaqueSortFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultOpaqueSortFlags;
}
constexpr ::UnityEngine::Rendering::SortingCriteria const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_defaultOpaqueSortFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultOpaqueSortFlags;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_defaultOpaqueSortFlags(::UnityEngine::Rendering::SortingCriteria value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultOpaqueSortFlags = value;
}
constexpr ::UnityEngine::Experimental::Rendering::XRPass*& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get__xr_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xr_k__BackingField;
}
constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get__xr_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xr_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set__xr_k__BackingField(::UnityEngine::Experimental::Rendering::XRPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xr_k__BackingField = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_maxShadowDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxShadowDistance;
}
constexpr float_t const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_maxShadowDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxShadowDistance;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_maxShadowDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxShadowDistance = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_postProcessEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postProcessEnabled;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_postProcessEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postProcessEnabled;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_postProcessEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___postProcessEnabled = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_stackAnyPostProcessingEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stackAnyPostProcessingEnabled;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_stackAnyPostProcessingEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stackAnyPostProcessingEnabled;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_stackAnyPostProcessingEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stackAnyPostProcessingEnabled = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*&
UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_captureActions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___captureActions;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* const&
UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_captureActions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___captureActions;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_captureActions(
    ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___captureActions = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_volumeLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volumeLayerMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_volumeLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volumeLayerMask;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_volumeLayerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___volumeLayerMask = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_volumeTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volumeTrigger;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_volumeTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volumeTrigger;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_volumeTrigger(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___volumeTrigger = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_isStopNaNEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isStopNaNEnabled;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_isStopNaNEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isStopNaNEnabled;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_isStopNaNEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isStopNaNEnabled = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_isDitheringEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDitheringEnabled;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_isDitheringEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDitheringEnabled;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_isDitheringEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isDitheringEnabled = value;
}
constexpr ::UnityEngine::Rendering::Universal::AntialiasingMode& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_antialiasing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___antialiasing;
}
constexpr ::UnityEngine::Rendering::Universal::AntialiasingMode const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_antialiasing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___antialiasing;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_antialiasing(::UnityEngine::Rendering::Universal::AntialiasingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___antialiasing = value;
}
constexpr ::UnityEngine::Rendering::Universal::AntialiasingQuality& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_antialiasingQuality() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___antialiasingQuality;
}
constexpr ::UnityEngine::Rendering::Universal::AntialiasingQuality const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_antialiasingQuality() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___antialiasingQuality;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_antialiasingQuality(::UnityEngine::Rendering::Universal::AntialiasingQuality value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___antialiasingQuality = value;
}
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer*& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_renderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderer;
}
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer* const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_renderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderer;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_renderer(::UnityEngine::Rendering::Universal::ScriptableRenderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderer = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_resolveFinalTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resolveFinalTarget;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_resolveFinalTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resolveFinalTarget;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_resolveFinalTarget(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resolveFinalTarget = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_worldSpaceCameraPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___worldSpaceCameraPos;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_worldSpaceCameraPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___worldSpaceCameraPos;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_worldSpaceCameraPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___worldSpaceCameraPos = value;
}
constexpr ::UnityEngine::Color& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_backgroundColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundColor;
}
constexpr ::UnityEngine::Color const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_backgroundColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundColor;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_backgroundColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___backgroundColor = value;
}
constexpr ::UnityEngine::Rendering::Universal::TaaHistory*& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_taaHistory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taaHistory;
}
constexpr ::UnityEngine::Rendering::Universal::TaaHistory* const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_taaHistory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taaHistory;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_taaHistory(::UnityEngine::Rendering::Universal::TaaHistory* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___taaHistory = value;
}
constexpr ::UnityEngine::Rendering::Universal::StpHistory*& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_stpHistory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stpHistory;
}
constexpr ::UnityEngine::Rendering::Universal::StpHistory* const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_stpHistory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stpHistory;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_stpHistory(::UnityEngine::Rendering::Universal::StpHistory* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stpHistory = value;
}
constexpr ::UnityEngine::Rendering::Universal::TemporalAA_Settings& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_taaSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taaSettings;
}
constexpr ::UnityEngine::Rendering::Universal::TemporalAA_Settings const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_taaSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taaSettings;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_taaSettings(::UnityEngine::Rendering::Universal::TemporalAA_Settings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___taaSettings = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_baseCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_get_baseCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseCamera;
}
constexpr void UnityEngine::Rendering::Universal::UniversalCameraData::__cordl_internal_set_baseCamera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___baseCamera = value;
}
inline void UnityEngine::Rendering::Universal::UniversalCameraData::SetViewAndProjectionMatrix(::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                           { "SetViewAndProjectionMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewMatrix, projectionMatrix);
}
inline void UnityEngine::Rendering::Universal::UniversalCameraData::SetViewProjectionAndJitterMatrix(::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix,
                                                                                                     ::UnityEngine::Matrix4x4 jitterMatrix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
          { "SetViewProjectionAndJitterMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewMatrix, projectionMatrix, jitterMatrix);
}
inline void UnityEngine::Rendering::Universal::UniversalCameraData::PushBuiltinShaderConstantsXR(::UnityEngine::Rendering::RasterCommandBuffer* cmd, bool renderIntoTexture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                           { "PushBuiltinShaderConstantsXR", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, renderIntoTexture);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::UniversalCameraData::GetViewMatrix(int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "GetViewMatrix", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method, viewIndex);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::UniversalCameraData::GetProjectionMatrix(int32_t viewIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "GetProjectionMatrix", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method, viewIndex);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::UniversalCameraData::GetProjectionMatrixNoJitter(int32_t viewIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "GetProjectionMatrixNoJitter", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method, viewIndex);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::UniversalCameraData::GetGPUProjectionMatrix(int32_t viewIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "GetGPUProjectionMatrix", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method, viewIndex);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::UniversalCameraData::GetGPUProjectionMatrixNoJitter(int32_t viewIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "GetGPUProjectionMatrixNoJitter", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method, viewIndex);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::UniversalCameraData::GetGPUProjectionMatrix(bool renderIntoTexture, int32_t viewIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                                                         { "GetGPUProjectionMatrix", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method, renderIntoTexture, viewIndex);
}
inline int32_t UnityEngine::Rendering::Universal::UniversalCameraData::get_scaledWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_scaledWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::UniversalCameraData::get_scaledHeight() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_scaledHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::UniversalCameraHistory* UnityEngine::Rendering::Universal::UniversalCameraData::get_historyManager() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_historyManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalCameraData::set_historyManager(::UnityEngine::Rendering::Universal::UniversalCameraHistory* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                           { "set_historyManager", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalCameraData::get_requireSrgbConversion() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_requireSrgbConversion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalCameraData::get_isGameCamera() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_isGameCamera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalCameraData::get_isSceneViewCamera() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_isSceneViewCamera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalCameraData::get_isPreviewCamera() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_isPreviewCamera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalCameraData::get_isRenderPassSupportedCamera() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_isRenderPassSupportedCamera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalCameraData::get_resolveToScreen() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_resolveToScreen", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalCameraData::get_isHDROutputActive() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_isHDROutputActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation UnityEngine::Rendering::Universal::UniversalCameraData::get_hdrDisplayInformation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_hdrDisplayInformation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation>(this, ___internal_method);
}
inline ::UnityEngine::ColorGamut UnityEngine::Rendering::Universal::UniversalCameraData::get_hdrDisplayColorGamut() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_hdrDisplayColorGamut", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ColorGamut>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalCameraData::get_rendersOverlayUI() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_rendersOverlayUI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalCameraData::IsHandleYFlipped(::UnityEngine::Rendering::RTHandle* handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                                                         { "IsHandleYFlipped", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handle);
}
inline bool UnityEngine::Rendering::Universal::UniversalCameraData::IsCameraProjectionMatrixFlipped() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "IsCameraProjectionMatrixFlipped", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalCameraData::IsRenderTargetProjectionMatrixFlipped(::UnityEngine::Rendering::RTHandle* color, ::UnityEngine::Rendering::RTHandle* depth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                          { "IsRenderTargetProjectionMatrixFlipped", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, color, depth);
}
inline bool UnityEngine::Rendering::Universal::UniversalCameraData::IsTemporalAARequested() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "IsTemporalAARequested", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalCameraData::IsTemporalAAEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "IsTemporalAAEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalCameraData::IsSTPRequested() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "IsSTPRequested", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalCameraData::IsSTPEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "IsSTPEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::XRPass* UnityEngine::Rendering::Universal::UniversalCameraData::get_xr() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_xr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::XRPass*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalCameraData::set_xr(::UnityEngine::Experimental::Rendering::XRPass* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                                                         { "set_xr", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::XRPassUniversal* UnityEngine::Rendering::Universal::UniversalCameraData::get_xrUniversal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_xrUniversal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::XRPassUniversal*>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalCameraData::get_resetHistory() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { "get_resetHistory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalCameraData::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalCameraData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::UniversalCameraData* UnityEngine::Rendering::Universal::UniversalCameraData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::UniversalCameraData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData::UniversalCameraData() {}
