#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\RenderingUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AttachmentDescriptor_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingUtils_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__FormatUsage_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureDesc_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalLightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__AttachmentDescriptor_def.hpp"
#include "UnityEngine/Rendering/zzzz__ClearFlag_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsDeviceType_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferLoadAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererListParams_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScaleFunc_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "UnityEngine/Rendering/zzzz__SortingCriteria_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "UnityEngine/zzzz__TextureWrapMode_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.get_emptyAttachment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::AttachmentDescriptor (*)()>(&::UnityEngine::Rendering::Universal::RenderingUtils::get_emptyAttachment)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x68b22a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(), { "get_emptyAttachment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.get_fullscreenMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)()>(&::UnityEngine::Rendering::Universal::RenderingUtils::get_fullscreenMesh)> {
  constexpr static std::size_t size = 0x5e8;
  constexpr static std::size_t addrs = 0x68b230c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(), { "get_fullscreenMesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.get_useStructuredBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::Universal::RenderingUtils::get_useStructuredBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68b28f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(), { "get_useStructuredBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.SupportsLightLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::GraphicsDeviceType)>(&::UnityEngine::Rendering::Universal::RenderingUtils::SupportsLightLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68b28fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                                                           { "SupportsLightLayers", {}, { ::i2c::type_of<::UnityEngine::Rendering::GraphicsDeviceType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.get_errorMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::UnityEngine::Rendering::Universal::RenderingUtils::get_errorMaterial)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x68b2904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(), { "get_errorMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.SetViewAndProjectionMatrices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, bool)>(
    &::UnityEngine::Rendering::Universal::RenderingUtils::SetViewAndProjectionMatrices)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x68b2aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                                                           { "SetViewAndProjectionMatrices",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(),
                                                                                               ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.SetViewAndProjectionMatrices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, bool)>(
    &::UnityEngine::Rendering::Universal::RenderingUtils::SetViewAndProjectionMatrices)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x68a346c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                             { "SetViewAndProjectionMatrices",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(),
                                                                 ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.SetScaleBiasRt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*>,
                                                                ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::Universal::RenderingUtils::SetScaleBiasRt)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x68b2b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                { "SetScaleBiasRt",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*>>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.SetScaleBiasRt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::UnityEngine::Rendering::Universal::RenderingUtils::SetScaleBiasRt)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x68b2ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
            { "SetScaleBiasRt", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.Blit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rect, ::UnityEngine::Rendering::RTHandle*,
                                                                ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction,
                                                                ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, ::UnityEngine::Material*, int32_t)>(
    &::UnityEngine::Rendering::Universal::RenderingUtils::Blit)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x68b2e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                         { "Blit",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rect>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(),
                                             ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.Blit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rect, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RenderBufferLoadAction,
    ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction,
    ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, ::UnityEngine::Material*, int32_t)>(&::UnityEngine::Rendering::Universal::RenderingUtils::Blit)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x68b3054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                { "Blit",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                    ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(),
                                                    ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.FinalBlit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*,
                         ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Material*, int32_t)>(
        &::UnityEngine::Rendering::Universal::RenderingUtils::FinalBlit)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x68b3268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                { "FinalBlit",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(),
                                                    ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.CreateRendererParamsObjectsWithError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::CullingResults>, ::UnityEngine::Camera*, ::UnityEngine::Rendering::FilteringSettings,
                                                                ::UnityEngine::Rendering::SortingCriteria, ::by_ref<::UnityEngine::Rendering::RendererListParams>)>(
    &::UnityEngine::Rendering::Universal::RenderingUtils::CreateRendererParamsObjectsWithError)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x68b371c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                             { "CreateRendererParamsObjectsWithError",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::FilteringSettings>(), ::i2c::type_of<::UnityEngine::Rendering::SortingCriteria>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererListParams>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.CreateRendererListObjectsWithError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::CullingResults>, ::UnityEngine::Camera*, ::UnityEngine::Rendering::FilteringSettings,
    ::UnityEngine::Rendering::SortingCriteria, ::by_ref<::UnityEngine::Rendering::RendererList>)>(&::UnityEngine::Rendering::Universal::RenderingUtils::CreateRendererListObjectsWithError)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x68b3a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                { "CreateRendererListObjectsWithError",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(),
                                                    ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::FilteringSettings>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::SortingCriteria>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.CreateRendererListObjectsWithError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::by_ref<::UnityEngine::Rendering::CullingResults>, ::UnityEngine::Camera*,
                         ::UnityEngine::Rendering::FilteringSettings, ::UnityEngine::Rendering::SortingCriteria, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>)>(
        &::UnityEngine::Rendering::Universal::RenderingUtils::CreateRendererListObjectsWithError)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x68b3bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                            { "CreateRendererListObjectsWithError",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(),
                                ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::FilteringSettings>(), ::i2c::type_of<::UnityEngine::Rendering::SortingCriteria>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.DrawRendererListObjectsWithError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::by_ref<::UnityEngine::Rendering::RendererList>)>(
    &::UnityEngine::Rendering::Universal::RenderingUtils::DrawRendererListObjectsWithError)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x68b3d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
            { "DrawRendererListObjectsWithError", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.CreateRendererListWithRenderStateBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::CullingResults>, ::UnityEngine::Rendering::DrawingSettings, ::UnityEngine::Rendering::FilteringSettings,
    ::UnityEngine::Rendering::RenderStateBlock, ::by_ref<::UnityEngine::Rendering::RendererList>)>(&::UnityEngine::Rendering::Universal::RenderingUtils::CreateRendererListWithRenderStateBlock)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x68a3c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                { "CreateRendererListWithRenderStateBlock",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::DrawingSettings>(), ::i2c::type_of<::UnityEngine::Rendering::FilteringSettings>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderStateBlock>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.CreateRendererListWithRenderStateBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::by_ref<::UnityEngine::Rendering::CullingResults>, ::UnityEngine::Rendering::DrawingSettings,
                         ::UnityEngine::Rendering::FilteringSettings, ::UnityEngine::Rendering::RenderStateBlock, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>)>(
        &::UnityEngine::Rendering::Universal::RenderingUtils::CreateRendererListWithRenderStateBlock)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x68a3998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                            { "CreateRendererListWithRenderStateBlock",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(),
                                ::i2c::type_of<::UnityEngine::Rendering::DrawingSettings>(), ::i2c::type_of<::UnityEngine::Rendering::FilteringSettings>(),
                                ::i2c::type_of<::UnityEngine::Rendering::RenderStateBlock>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.ClearSystemInfoCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Rendering::Universal::RenderingUtils::ClearSystemInfoCache)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68b3d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(), { "ClearSystemInfoCache", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.SupportsRenderTextureFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RenderTextureFormat)>(&::UnityEngine::Rendering::Universal::RenderingUtils::SupportsRenderTextureFormat)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x68b3db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                                                           { "SupportsRenderTextureFormat", {}, { ::i2c::type_of<::UnityEngine::RenderTextureFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.SupportsGraphicsFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::FormatUsage)>(
    &::UnityEngine::Rendering::Universal::RenderingUtils::SupportsGraphicsFormat)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x68b3ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
            { "SupportsGraphicsFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::FormatUsage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.GetLastValidColorBufferIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>)>(
    &::UnityEngine::Rendering::Universal::RenderingUtils::GetLastValidColorBufferIndex)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x68b3f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                             { "GetLastValidColorBufferIndex", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.GetValidColorBufferCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<::UnityEngine::Rendering::RTHandle*>)>(&::UnityEngine::Rendering::Universal::RenderingUtils::GetValidColorBufferCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68b3fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                                                           { "GetValidColorBufferCount", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.IsMRT
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::UnityEngine::Rendering::RTHandle*>)>(&::UnityEngine::Rendering::Universal::RenderingUtils::IsMRT)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x68b4050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                                                           { "IsMRT", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>, ::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::Universal::RenderingUtils::Contains)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x68b40b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                            { "Contains", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::UnityEngine::Rendering::RTHandle*>, ::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::Universal::RenderingUtils::IndexOf)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x68b416c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                         { "IndexOf", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::UnityEngine::Rendering::RTHandle*>, ::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::RenderingUtils::IndexOf)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68b422c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                { "IndexOf", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.CountDistinct
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<::UnityEngine::Rendering::RTHandle*>, ::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::RenderingUtils::CountDistinct)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x68b42bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                { "CountDistinct", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.LastValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::UnityEngine::Rendering::RTHandle*>)>(&::UnityEngine::Rendering::Universal::RenderingUtils::LastValid)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68b43a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                                                           { "LastValid", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Rendering::ClearFlag)>(
    &::UnityEngine::Rendering::Universal::RenderingUtils::Contains)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68b4430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                             { "Contains", {}, { ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.SequenceEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::UnityEngine::Rendering::RTHandle*>, ::ArrayW<::UnityEngine::Rendering::RTHandle*>)>(
    &::UnityEngine::Rendering::Universal::RenderingUtils::SequenceEqual)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x68b443c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                            { "SequenceEqual", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.MultisampleDepthResolveSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::Universal::RenderingUtils::MultisampleDepthResolveSupported)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x68b4520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(), { "MultisampleDepthResolveSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.RTHandleNeedsReAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::RTHandle*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>, bool)>(
    &::UnityEngine::Rendering::Universal::RenderingUtils::RTHandleNeedsReAlloc)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x68b4618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                             { "RTHandleNeedsReAlloc",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.GetCameraTargetIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (*)(::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::UnityEngine::Rendering::Universal::RenderingUtils::GetCameraTargetIdentifier)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x68b48ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                             { "GetCameraTargetIdentifier", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.ReAllocateIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::RTHandle*>, ::by_ref<::UnityEngine::RenderTextureDescriptor>, ::UnityEngine::FilterMode,
                                                                ::UnityEngine::TextureWrapMode, bool, int32_t, float_t, ::StringW)>(
    &::UnityEngine::Rendering::Universal::RenderingUtils::ReAllocateIfNeeded)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x68b4a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                             { "ReAllocateIfNeeded",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(),
                                                                 ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.ReAllocateIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::RTHandle*>, ::UnityEngine::Vector2, ::by_ref<::UnityEngine::RenderTextureDescriptor>,
                                                                ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, bool, int32_t, float_t, ::StringW)>(
    &::UnityEngine::Rendering::Universal::RenderingUtils::ReAllocateIfNeeded)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x68b4ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                            { "ReAllocateIfNeeded",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.ReAllocateIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::RTHandle*>, ::UnityEngine::Rendering::ScaleFunc*, ::by_ref<::UnityEngine::RenderTextureDescriptor>,
                                                                ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, bool, int32_t, float_t, ::StringW)>(
    &::UnityEngine::Rendering::Universal::RenderingUtils::ReAllocateIfNeeded)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x68b52c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                            { "ReAllocateIfNeeded",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::UnityEngine::Rendering::ScaleFunc*>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                                ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.ReAllocateHandleIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::RTHandle*>, ::by_ref<::UnityEngine::RenderTextureDescriptor>, ::UnityEngine::FilterMode,
                                                                ::UnityEngine::TextureWrapMode, int32_t, float_t, ::StringW)>(
    &::UnityEngine::Rendering::Universal::RenderingUtils::ReAllocateHandleIfNeeded)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x68a6e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                             { "ReAllocateHandleIfNeeded",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(),
                                                                 ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.ReAllocateHandleIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::RTHandle*>, ::UnityEngine::Vector2, ::by_ref<::UnityEngine::RenderTextureDescriptor>,
                                                                ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, int32_t, float_t, ::StringW)>(
    &::UnityEngine::Rendering::Universal::RenderingUtils::ReAllocateHandleIfNeeded)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x68b56cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                { "ReAllocateHandleIfNeeded",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                    ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.ReAllocateHandleIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::RTHandle*>, ::UnityEngine::Rendering::ScaleFunc*, ::by_ref<::UnityEngine::RenderTextureDescriptor>,
                                                                ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, int32_t, float_t, ::StringW)>(
    &::UnityEngine::Rendering::Universal::RenderingUtils::ReAllocateHandleIfNeeded)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x68b5b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                { "ReAllocateHandleIfNeeded",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::UnityEngine::Rendering::ScaleFunc*>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                    ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.SetMaxRTHandlePoolCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::UnityEngine::Rendering::Universal::RenderingUtils::SetMaxRTHandlePoolCapacity)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x68b5fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(), { "SetMaxRTHandlePoolCapacity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.AddStaleResourceToPoolOrRelease
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, ::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::RenderingUtils::AddStaleResourceToPoolOrRelease)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x68b4df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
            { "AddStaleResourceToPoolOrRelease", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.CreateDrawingSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DrawingSettings (*)(
    ::UnityEngine::Rendering::ShaderTagId, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>, ::UnityEngine::Rendering::SortingCriteria)>(
    &::UnityEngine::Rendering::Universal::RenderingUtils::CreateDrawingSettings)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x68b6058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                { "CreateDrawingSettings",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::ShaderTagId>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::SortingCriteria>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.CreateDrawingSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DrawingSettings (*)(
    ::UnityEngine::Rendering::ShaderTagId, ::UnityEngine::Rendering::Universal::UniversalRenderingData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
    ::UnityEngine::Rendering::Universal::UniversalLightData*, ::UnityEngine::Rendering::SortingCriteria)>(&::UnityEngine::Rendering::Universal::RenderingUtils::CreateDrawingSettings)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x68b61c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                { "CreateDrawingSettings",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::ShaderTagId>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::UnityEngine::Rendering::SortingCriteria>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.CreateDrawingSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DrawingSettings (*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>, ::UnityEngine::Rendering::SortingCriteria)>(
    &::UnityEngine::Rendering::Universal::RenderingUtils::CreateDrawingSettings)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x68b6364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                { "CreateDrawingSettings",
                                                  {},
                                                  { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>(), ::i2c::type_of<::UnityEngine::Rendering::SortingCriteria>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.CreateDrawingSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DrawingSettings (*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*, ::UnityEngine::Rendering::Universal::UniversalRenderingData*,
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::UniversalLightData*, ::UnityEngine::Rendering::SortingCriteria)>(
    &::UnityEngine::Rendering::Universal::RenderingUtils::CreateDrawingSettings)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x68a3738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                            { "CreateDrawingSettings",
                              {},
                              { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::UnityEngine::Rendering::SortingCriteria>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingUtils.GetFinalBlitScaleBias
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
        &::UnityEngine::Rendering::Universal::RenderingUtils::GetFinalBlitScaleBias)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x68b64d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                             { "GetFinalBlitScaleBias",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::RenderingUtils::setStaticF_m_LegacyShaderPassNames(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*, "m_LegacyShaderPassNames", ::UnityEngine::Rendering::Universal::RenderingUtils*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* UnityEngine::Rendering::Universal::RenderingUtils::getStaticF_m_LegacyShaderPassNames() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*, "m_LegacyShaderPassNames",
                                           ::UnityEngine::Rendering::Universal::RenderingUtils*>();
}
inline void UnityEngine::Rendering::Universal::RenderingUtils::setStaticF_s_EmptyAttachment(::UnityEngine::Rendering::AttachmentDescriptor value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::AttachmentDescriptor, "s_EmptyAttachment", ::UnityEngine::Rendering::Universal::RenderingUtils*>(
      std::forward<::UnityEngine::Rendering::AttachmentDescriptor>(value));
}
inline ::UnityEngine::Rendering::AttachmentDescriptor UnityEngine::Rendering::Universal::RenderingUtils::getStaticF_s_EmptyAttachment() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::AttachmentDescriptor, "s_EmptyAttachment", ::UnityEngine::Rendering::Universal::RenderingUtils*>();
}
inline void UnityEngine::Rendering::Universal::RenderingUtils::setStaticF_s_FullscreenMesh(::UnityW<::UnityEngine::Mesh> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Mesh>, "s_FullscreenMesh", ::UnityEngine::Rendering::Universal::RenderingUtils*>(std::forward<::UnityW<::UnityEngine::Mesh>>(value));
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::Universal::RenderingUtils::getStaticF_s_FullscreenMesh() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Mesh>, "s_FullscreenMesh", ::UnityEngine::Rendering::Universal::RenderingUtils*>();
}
inline void UnityEngine::Rendering::Universal::RenderingUtils::setStaticF_s_ErrorMaterial(::UnityW<::UnityEngine::Material> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_ErrorMaterial", ::UnityEngine::Rendering::Universal::RenderingUtils*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::RenderingUtils::getStaticF_s_ErrorMaterial() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_ErrorMaterial", ::UnityEngine::Rendering::Universal::RenderingUtils*>();
}
inline void UnityEngine::Rendering::Universal::RenderingUtils::setStaticF_s_ShaderTagValues(::ArrayW<::UnityEngine::Rendering::ShaderTagId> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::ShaderTagId>, "s_ShaderTagValues", ::UnityEngine::Rendering::Universal::RenderingUtils*>(
      std::forward<::ArrayW<::UnityEngine::Rendering::ShaderTagId>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::ShaderTagId> UnityEngine::Rendering::Universal::RenderingUtils::getStaticF_s_ShaderTagValues() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::ShaderTagId>, "s_ShaderTagValues", ::UnityEngine::Rendering::Universal::RenderingUtils*>();
}
inline void UnityEngine::Rendering::Universal::RenderingUtils::setStaticF_s_RenderStateBlocks(::ArrayW<::UnityEngine::Rendering::RenderStateBlock> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::RenderStateBlock>, "s_RenderStateBlocks", ::UnityEngine::Rendering::Universal::RenderingUtils*>(
      std::forward<::ArrayW<::UnityEngine::Rendering::RenderStateBlock>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::RenderStateBlock> UnityEngine::Rendering::Universal::RenderingUtils::getStaticF_s_RenderStateBlocks() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::RenderStateBlock>, "s_RenderStateBlocks", ::UnityEngine::Rendering::Universal::RenderingUtils*>();
}
inline void UnityEngine::Rendering::Universal::RenderingUtils::setStaticF_m_RenderTextureFormatSupport(::System::Collections::Generic::Dictionary_2<::UnityEngine::RenderTextureFormat, bool>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::RenderTextureFormat, bool>*, "m_RenderTextureFormatSupport",
                                    ::UnityEngine::Rendering::Universal::RenderingUtils*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::RenderTextureFormat, bool>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::RenderTextureFormat, bool>* UnityEngine::Rendering::Universal::RenderingUtils::getStaticF_m_RenderTextureFormatSupport() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::RenderTextureFormat, bool>*, "m_RenderTextureFormatSupport",
                                           ::UnityEngine::Rendering::Universal::RenderingUtils*>();
}
inline ::UnityEngine::Rendering::AttachmentDescriptor UnityEngine::Rendering::Universal::RenderingUtils::get_emptyAttachment() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(), { "get_emptyAttachment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AttachmentDescriptor>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::Universal::RenderingUtils::get_fullscreenMesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(), { "get_fullscreenMesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::RenderingUtils::get_useStructuredBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(), { "get_useStructuredBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::RenderingUtils::SupportsLightLayers(::UnityEngine::Rendering::GraphicsDeviceType type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                                                         { "SupportsLightLayers", {}, { ::i2c::type_of<::UnityEngine::Rendering::GraphicsDeviceType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::RenderingUtils::get_errorMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(), { "get_errorMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::RenderingUtils::SetViewAndProjectionMatrices(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Matrix4x4 viewMatrix,
                                                                                            ::UnityEngine::Matrix4x4 projectionMatrix, bool setInverseMatrices) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                                                         { "SetViewAndProjectionMatrices",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(),
                                                                                             ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, viewMatrix, projectionMatrix, setInverseMatrices);
}
inline void UnityEngine::Rendering::Universal::RenderingUtils::SetViewAndProjectionMatrices(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Matrix4x4 viewMatrix,
                                                                                            ::UnityEngine::Matrix4x4 projectionMatrix, bool setInverseMatrices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                           { "SetViewAndProjectionMatrices",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(),
                                                               ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, viewMatrix, projectionMatrix, setInverseMatrices);
}
inline void UnityEngine::Rendering::Universal::RenderingUtils::SetScaleBiasRt(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                              ::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*> cameraData,
                                                                              ::UnityEngine::Rendering::RTHandle* rTHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                              { "SetScaleBiasRt",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*>>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, cameraData, rTHandle);
}
inline void UnityEngine::Rendering::Universal::RenderingUtils::SetScaleBiasRt(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                              ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
          { "SetScaleBiasRt", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, renderingData);
}
inline void UnityEngine::Rendering::Universal::RenderingUtils::Blit(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rect viewport,
                                                                    ::UnityEngine::Rendering::RTHandle* destination, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction,
                                                                    ::UnityEngine::Rendering::RenderBufferStoreAction storeAction, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                                                    ::UnityEngine::Color clearColor, ::UnityEngine::Material* material, int32_t passIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                       { "Blit",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rect>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(),
                                           ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, viewport, destination, loadAction, storeAction, clearFlag, clearColor, material, passIndex);
}
inline void UnityEngine::Rendering::Universal::RenderingUtils::Blit(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rect viewport,
                                                                    ::UnityEngine::Rendering::RTHandle* destinationColor, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction,
                                                                    ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RTHandle* destinationDepthStencil,
                                                                    ::UnityEngine::Rendering::RenderBufferLoadAction depthStencilLoadAction,
                                                                    ::UnityEngine::Rendering::RenderBufferStoreAction depthStencilStoreAction, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                                                    ::UnityEngine::Color clearColor, ::UnityEngine::Material* material, int32_t passIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                           { "Blit",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                               ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(),
                                                               ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, viewport, destinationColor, colorLoadAction, colorStoreAction, destinationDepthStencil,
                                                   depthStencilLoadAction, depthStencilStoreAction, clearFlag, clearColor, material, passIndex);
}
inline void UnityEngine::Rendering::Universal::RenderingUtils::FinalBlit(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                         ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination,
                                                                         ::UnityEngine::Rendering::RenderBufferLoadAction loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction storeAction,
                                                                         ::UnityEngine::Material* material, int32_t passIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                           { "FinalBlit",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(),
                                                               ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, cameraData, source, destination, loadAction, storeAction, material, passIndex);
}
inline void UnityEngine::Rendering::Universal::RenderingUtils::CreateRendererParamsObjectsWithError(::by_ref<::UnityEngine::Rendering::CullingResults> cullResults, ::UnityEngine::Camera* camera,
                                                                                                    ::UnityEngine::Rendering::FilteringSettings filterSettings,
                                                                                                    ::UnityEngine::Rendering::SortingCriteria sortFlags,
                                                                                                    ::by_ref<::UnityEngine::Rendering::RendererListParams> param) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                           { "CreateRendererParamsObjectsWithError",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::FilteringSettings>(), ::i2c::type_of<::UnityEngine::Rendering::SortingCriteria>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererListParams>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cullResults, camera, filterSettings, sortFlags, param);
}
inline void UnityEngine::Rendering::Universal::RenderingUtils::CreateRendererListObjectsWithError(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                  ::by_ref<::UnityEngine::Rendering::CullingResults> cullResults, ::UnityEngine::Camera* camera,
                                                                                                  ::UnityEngine::Rendering::FilteringSettings filterSettings,
                                                                                                  ::UnityEngine::Rendering::SortingCriteria sortFlags,
                                                                                                  ::by_ref<::UnityEngine::Rendering::RendererList> rl) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                              { "CreateRendererListObjectsWithError",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(),
                                                  ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::FilteringSettings>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::SortingCriteria>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, cullResults, camera, filterSettings, sortFlags, rl);
}
inline void UnityEngine::Rendering::Universal::RenderingUtils::CreateRendererListObjectsWithError(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                  ::by_ref<::UnityEngine::Rendering::CullingResults> cullResults, ::UnityEngine::Camera* camera,
                                                                                                  ::UnityEngine::Rendering::FilteringSettings filterSettings,
                                                                                                  ::UnityEngine::Rendering::SortingCriteria sortFlags,
                                                                                                  ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> rl) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                          { "CreateRendererListObjectsWithError",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(),
                              ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::FilteringSettings>(), ::i2c::type_of<::UnityEngine::Rendering::SortingCriteria>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderGraph, cullResults, camera, filterSettings, sortFlags, rl);
}
inline void UnityEngine::Rendering::Universal::RenderingUtils::DrawRendererListObjectsWithError(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                                ::by_ref<::UnityEngine::Rendering::RendererList> rl) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
          { "DrawRendererListObjectsWithError", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, rl);
}
inline void UnityEngine::Rendering::Universal::RenderingUtils::CreateRendererListWithRenderStateBlock(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                      ::by_ref<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                                      ::UnityEngine::Rendering::DrawingSettings ds, ::UnityEngine::Rendering::FilteringSettings fs,
                                                                                                      ::UnityEngine::Rendering::RenderStateBlock rsb,
                                                                                                      ::by_ref<::UnityEngine::Rendering::RendererList> rl) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                              { "CreateRendererListWithRenderStateBlock",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::DrawingSettings>(), ::i2c::type_of<::UnityEngine::Rendering::FilteringSettings>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::RenderStateBlock>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, cullResults, ds, fs, rsb, rl);
}
inline void UnityEngine::Rendering::Universal::RenderingUtils::CreateRendererListWithRenderStateBlock(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                      ::by_ref<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                                      ::UnityEngine::Rendering::DrawingSettings ds, ::UnityEngine::Rendering::FilteringSettings fs,
                                                                                                      ::UnityEngine::Rendering::RenderStateBlock rsb,
                                                                                                      ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> rl) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                          { "CreateRendererListWithRenderStateBlock",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(),
                              ::i2c::type_of<::UnityEngine::Rendering::DrawingSettings>(), ::i2c::type_of<::UnityEngine::Rendering::FilteringSettings>(),
                              ::i2c::type_of<::UnityEngine::Rendering::RenderStateBlock>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderGraph, cullResults, ds, fs, rsb, rl);
}
inline void UnityEngine::Rendering::Universal::RenderingUtils::ClearSystemInfoCache() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(), { "ClearSystemInfoCache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::RenderingUtils::SupportsRenderTextureFormat(::UnityEngine::RenderTextureFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                                                         { "SupportsRenderTextureFormat", {}, { ::i2c::type_of<::UnityEngine::RenderTextureFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format);
}
inline bool UnityEngine::Rendering::Universal::RenderingUtils::SupportsGraphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                                      ::UnityEngine::Experimental::Rendering::FormatUsage usage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
          { "SupportsGraphicsFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::FormatUsage>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format, usage);
}
inline int32_t UnityEngine::Rendering::Universal::RenderingUtils::GetLastValidColorBufferIndex(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> colorBuffers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                           { "GetLastValidColorBufferIndex", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, colorBuffers);
}
inline uint32_t UnityEngine::Rendering::Universal::RenderingUtils::GetValidColorBufferCount(::ArrayW<::UnityEngine::Rendering::RTHandle*> colorBuffers) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                                                         { "GetValidColorBufferCount", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, colorBuffers);
}
inline bool UnityEngine::Rendering::Universal::RenderingUtils::IsMRT(::ArrayW<::UnityEngine::Rendering::RTHandle*> colorBuffers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(), { "IsMRT", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, colorBuffers);
}
inline bool UnityEngine::Rendering::Universal::RenderingUtils::Contains(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> source, ::UnityEngine::Rendering::RenderTargetIdentifier value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                          { "Contains", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value);
}
inline int32_t UnityEngine::Rendering::Universal::RenderingUtils::IndexOf(::ArrayW<::UnityEngine::Rendering::RTHandle*> source, ::UnityEngine::Rendering::RenderTargetIdentifier value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                       { "IndexOf", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, value);
}
inline int32_t UnityEngine::Rendering::Universal::RenderingUtils::IndexOf(::ArrayW<::UnityEngine::Rendering::RTHandle*> source, ::UnityEngine::Rendering::RTHandle* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                              { "IndexOf", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, value);
}
inline uint32_t UnityEngine::Rendering::Universal::RenderingUtils::CountDistinct(::ArrayW<::UnityEngine::Rendering::RTHandle*> source, ::UnityEngine::Rendering::RTHandle* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                              { "CountDistinct", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, source, value);
}
inline int32_t UnityEngine::Rendering::Universal::RenderingUtils::LastValid(::ArrayW<::UnityEngine::Rendering::RTHandle*> source) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                                                         { "LastValid", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source);
}
inline bool UnityEngine::Rendering::Universal::RenderingUtils::Contains(::UnityEngine::Rendering::ClearFlag a, ::UnityEngine::Rendering::ClearFlag b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                           { "Contains", {}, { ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::Rendering::Universal::RenderingUtils::SequenceEqual(::ArrayW<::UnityEngine::Rendering::RTHandle*> left, ::ArrayW<::UnityEngine::Rendering::RTHandle*> right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                       { "SequenceEqual", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::Rendering::Universal::RenderingUtils::MultisampleDepthResolveSupported() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(), { "MultisampleDepthResolveSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::RenderingUtils::RTHandleNeedsReAlloc(::UnityEngine::Rendering::RTHandle* handle,
                                                                                    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> descriptor, bool scaled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                           { "RTHandleNeedsReAlloc",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, descriptor, scaled);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier
UnityEngine::Rendering::Universal::RenderingUtils::GetCameraTargetIdentifier(::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                           { "GetCameraTargetIdentifier", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier>(nullptr, ___internal_method, renderingData);
}
inline bool UnityEngine::Rendering::Universal::RenderingUtils::ReAllocateIfNeeded(::by_ref<::UnityEngine::Rendering::RTHandle*> handle, ::by_ref<::UnityEngine::RenderTextureDescriptor> descriptor,
                                                                                  ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, bool isShadowMap, int32_t anisoLevel,
                                                                                  float_t mipMapBias, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                           { "ReAllocateIfNeeded",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(),
                                                               ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, descriptor, filterMode, wrapMode, isShadowMap, anisoLevel, mipMapBias, name);
}
inline bool UnityEngine::Rendering::Universal::RenderingUtils::ReAllocateIfNeeded(::by_ref<::UnityEngine::Rendering::RTHandle*> handle, ::UnityEngine::Vector2 scaleFactor,
                                                                                  ::by_ref<::UnityEngine::RenderTextureDescriptor> descriptor, ::UnityEngine::FilterMode filterMode,
                                                                                  ::UnityEngine::TextureWrapMode wrapMode, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                          { "ReAllocateIfNeeded",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                              ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, scaleFactor, descriptor, filterMode, wrapMode, isShadowMap, anisoLevel, mipMapBias, name);
}
inline bool UnityEngine::Rendering::Universal::RenderingUtils::ReAllocateIfNeeded(::by_ref<::UnityEngine::Rendering::RTHandle*> handle, ::UnityEngine::Rendering::ScaleFunc* scaleFunc,
                                                                                  ::by_ref<::UnityEngine::RenderTextureDescriptor> descriptor, ::UnityEngine::FilterMode filterMode,
                                                                                  ::UnityEngine::TextureWrapMode wrapMode, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                          { "ReAllocateIfNeeded",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::UnityEngine::Rendering::ScaleFunc*>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>(),
                              ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, scaleFunc, descriptor, filterMode, wrapMode, isShadowMap, anisoLevel, mipMapBias, name);
}
inline bool UnityEngine::Rendering::Universal::RenderingUtils::ReAllocateHandleIfNeeded(::by_ref<::UnityEngine::Rendering::RTHandle*> handle,
                                                                                        ::by_ref<::UnityEngine::RenderTextureDescriptor> descriptor, ::UnityEngine::FilterMode filterMode,
                                                                                        ::UnityEngine::TextureWrapMode wrapMode, int32_t anisoLevel, float_t mipMapBias, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                           { "ReAllocateHandleIfNeeded",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(),
                                                               ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, descriptor, filterMode, wrapMode, anisoLevel, mipMapBias, name);
}
inline bool UnityEngine::Rendering::Universal::RenderingUtils::ReAllocateHandleIfNeeded(::by_ref<::UnityEngine::Rendering::RTHandle*> handle, ::UnityEngine::Vector2 scaleFactor,
                                                                                        ::by_ref<::UnityEngine::RenderTextureDescriptor> descriptor, ::UnityEngine::FilterMode filterMode,
                                                                                        ::UnityEngine::TextureWrapMode wrapMode, int32_t anisoLevel, float_t mipMapBias, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                              { "ReAllocateHandleIfNeeded",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                  ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, scaleFactor, descriptor, filterMode, wrapMode, anisoLevel, mipMapBias, name);
}
inline bool UnityEngine::Rendering::Universal::RenderingUtils::ReAllocateHandleIfNeeded(::by_ref<::UnityEngine::Rendering::RTHandle*> handle, ::UnityEngine::Rendering::ScaleFunc* scaleFunc,
                                                                                        ::by_ref<::UnityEngine::RenderTextureDescriptor> descriptor, ::UnityEngine::FilterMode filterMode,
                                                                                        ::UnityEngine::TextureWrapMode wrapMode, int32_t anisoLevel, float_t mipMapBias, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                              { "ReAllocateHandleIfNeeded",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::UnityEngine::Rendering::ScaleFunc*>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                  ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, scaleFunc, descriptor, filterMode, wrapMode, anisoLevel, mipMapBias, name);
}
inline bool UnityEngine::Rendering::Universal::RenderingUtils::SetMaxRTHandlePoolCapacity(int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(), { "SetMaxRTHandlePoolCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, capacity);
}
inline void UnityEngine::Rendering::Universal::RenderingUtils::AddStaleResourceToPoolOrRelease(::UnityEngine::Rendering::RenderGraphModule::TextureDesc desc,
                                                                                               ::UnityEngine::Rendering::RTHandle* handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
          { "AddStaleResourceToPoolOrRelease", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, desc, handle);
}
inline ::UnityEngine::Rendering::DrawingSettings UnityEngine::Rendering::Universal::RenderingUtils::CreateDrawingSettings(::UnityEngine::Rendering::ShaderTagId shaderTagId,
                                                                                                                          ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
                                                                                                                          ::UnityEngine::Rendering::SortingCriteria sortingCriteria) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                           { "CreateDrawingSettings",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::ShaderTagId>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::SortingCriteria>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DrawingSettings>(nullptr, ___internal_method, shaderTagId, renderingData, sortingCriteria);
}
inline ::UnityEngine::Rendering::DrawingSettings UnityEngine::Rendering::Universal::RenderingUtils::CreateDrawingSettings(::UnityEngine::Rendering::ShaderTagId shaderTagId,
                                                                                                                          ::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                                                                                                          ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                                                          ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                                                                                                          ::UnityEngine::Rendering::SortingCriteria sortingCriteria) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                              { "CreateDrawingSettings",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::ShaderTagId>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::UnityEngine::Rendering::SortingCriteria>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DrawingSettings>(nullptr, ___internal_method, shaderTagId, renderingData, cameraData, lightData, sortingCriteria);
}
inline ::UnityEngine::Rendering::DrawingSettings
UnityEngine::Rendering::Universal::RenderingUtils::CreateDrawingSettings(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* shaderTagIdList,
                                                                         ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
                                                                         ::UnityEngine::Rendering::SortingCriteria sortingCriteria) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                              { "CreateDrawingSettings",
                                                {},
                                                { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>(), ::i2c::type_of<::UnityEngine::Rendering::SortingCriteria>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DrawingSettings>(nullptr, ___internal_method, shaderTagIdList, renderingData, sortingCriteria);
}
inline ::UnityEngine::Rendering::DrawingSettings UnityEngine::Rendering::Universal::RenderingUtils::CreateDrawingSettings(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* shaderTagIdList, ::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
    ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
    ::UnityEngine::Rendering::SortingCriteria sortingCriteria) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                       { "CreateDrawingSettings",
                                         {},
                                         { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::UnityEngine::Rendering::SortingCriteria>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DrawingSettings>(nullptr, ___internal_method, shaderTagIdList, renderingData, cameraData, lightData, sortingCriteria);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Universal::RenderingUtils::GetFinalBlitScaleBias(::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination,
                                                                                                       ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingUtils*>(),
                                                           { "GetFinalBlitScaleBias",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, source, destination, cameraData);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RenderingUtils::RenderingUtils() {}
