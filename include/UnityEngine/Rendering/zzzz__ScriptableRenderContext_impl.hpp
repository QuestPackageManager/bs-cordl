#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ScriptableRenderContext.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__AttachmentDescriptor_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ComputeQueueType_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__GizmoSubset_def.hpp"
#include "UnityEngine/Rendering/zzzz__LightShadowCasterCullingInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererListParams_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererListStatus_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableCullingParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowCastersCullingInfos_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowDrawingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowSplitData_def.hpp"
#include "UnityEngine/Rendering/zzzz__SortingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__UISubset_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
// Ctor Parameters [CppParam { name: "cullResults", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "splitBuffer", ty: "::UnityEngine::Rendering::ShadowSplitData*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "splitBufferLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "perLightInfos", ty:
// "::UnityEngine::Rendering::LightShadowCasterCullingInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "perLightInfoCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ScriptableRenderContext_CullShadowCastersContext::ScriptableRenderContext_CullShadowCastersContext(
    ::System::IntPtr cullResults, ::UnityEngine::Rendering::ShadowSplitData* splitBuffer, int32_t splitBufferLength, ::UnityEngine::Rendering::LightShadowCasterCullingInfo* perLightInfos,
    int32_t perLightInfoCount) noexcept {
  this->cullResults = cullResults;
  this->splitBuffer = splitBuffer;
  this->splitBufferLength = splitBufferLength;
  this->perLightInfos = perLightInfos;
  this->perLightInfoCount = perLightInfoCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ScriptableRenderContext_CullShadowCastersContext::ScriptableRenderContext_CullShadowCastersContext() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.BeginRenderPass_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t, ::System::IntPtr, int32_t, int32_t)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::BeginRenderPass_Internal)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b222b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                             { "BeginRenderPass_Internal",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.BeginSubPass_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t, ::System::IntPtr, int32_t, bool, bool)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::BeginSubPass_Internal)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6b22344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                             { "BeginSubPass_Internal",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.EndSubPass_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Rendering::ScriptableRenderContext::EndSubPass_Internal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b223c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "EndSubPass_Internal", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.EndRenderPass_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Rendering::ScriptableRenderContext::EndRenderPass_Internal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b22404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "EndRenderPass_Internal", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.HasInvokeOnRenderObjectCallbacks_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::ScriptableRenderContext::HasInvokeOnRenderObjectCallbacks_Internal)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b22440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "HasInvokeOnRenderObjectCallbacks_Internal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.Internal_Cull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>, ::UnityEngine::Rendering::ScriptableRenderContext, ::System::IntPtr)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::Internal_Cull)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b22468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                             { "Internal_Cull",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.Internal_CullShadowCasters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::System::IntPtr)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::Internal_CullShadowCasters)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b22550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                { "Internal_CullShadowCasters", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.InitializeSortSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::by_ref<::UnityEngine::Rendering::SortingSettings>)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::InitializeSortSettings)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6b22620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                         { "InitializeSortSettings", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SortingSettings>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.Submit_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ScriptableRenderContext::*)()>(&::UnityEngine::Rendering::ScriptableRenderContext::Submit_Internal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b2271c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "Submit_Internal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.SubmitForRenderPassValidation_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ScriptableRenderContext::*)()>(
    &::UnityEngine::Rendering::ScriptableRenderContext::SubmitForRenderPassValidation_Internal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b22758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "SubmitForRenderPassValidation_Internal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.GetCameras_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ScriptableRenderContext::*)(::System::Type*, ::System::Object*)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::GetCameras_Internal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b22794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                                                           { "GetCameras_Internal", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.EmitGeometryForCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::ScriptableRenderContext::EmitGeometryForCamera)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6b227e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "EmitGeometryForCamera", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.ExecuteCommandBuffer_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ScriptableRenderContext::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::ExecuteCommandBuffer_Internal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b228cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                                                           { "ExecuteCommandBuffer_Internal", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.ExecuteCommandBufferAsync_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ScriptableRenderContext::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ComputeQueueType)>(&::UnityEngine::Rendering::ScriptableRenderContext::ExecuteCommandBufferAsync_Internal)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b229a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                         { "ExecuteCommandBufferAsync_Internal", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ComputeQueueType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.SetupCameraProperties_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ScriptableRenderContext::*)(::UnityEngine::Camera*, bool, int32_t)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::SetupCameraProperties_Internal)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6b22a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                { "SetupCameraProperties_Internal", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.DrawWireOverlay_Impl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ScriptableRenderContext::*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::DrawWireOverlay_Impl)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6b22bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "DrawWireOverlay_Impl", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.Internal_GetPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::Rendering::ScriptableRenderContext::*)()>(
    &::UnityEngine::Rendering::ScriptableRenderContext::Internal_GetPtr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b22cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "Internal_GetPtr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.CreateRendererList_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RendererList (::UnityEngine::Rendering::ScriptableRenderContext::*)(
    ::System::IntPtr, ::by_ref<::UnityEngine::Rendering::DrawingSettings>, ::by_ref<::UnityEngine::Rendering::FilteringSettings>, ::UnityEngine::Rendering::ShaderTagId, bool, ::System::IntPtr,
    ::System::IntPtr, int32_t)>(&::UnityEngine::Rendering::ScriptableRenderContext::CreateRendererList_Internal)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6b22d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                             { "CreateRendererList_Internal",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::DrawingSettings>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::FilteringSettings>>(), ::i2c::type_of<::UnityEngine::Rendering::ShaderTagId>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.CreateShadowRendererList_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RendererList (::UnityEngine::Rendering::ScriptableRenderContext::*)(::System::IntPtr)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::CreateShadowRendererList_Internal)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6b22eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "CreateShadowRendererList_Internal", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.CreateSkyboxRendererList_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RendererList (::UnityEngine::Rendering::ScriptableRenderContext::*)(
    ::UnityEngine::Camera*, int32_t, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::CreateSkyboxRendererList_Internal)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6b22fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                { "CreateSkyboxRendererList_Internal",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(),
                                                    ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.CreateGizmoRendererList_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RendererList (::UnityEngine::Rendering::ScriptableRenderContext::*)(
    ::UnityEngine::Camera*, ::UnityEngine::Rendering::GizmoSubset)>(&::UnityEngine::Rendering::ScriptableRenderContext::CreateGizmoRendererList_Internal)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6b23184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                { "CreateGizmoRendererList_Internal", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::GizmoSubset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.CreateUIOverlayRendererList_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RendererList (::UnityEngine::Rendering::ScriptableRenderContext::*)(
    ::UnityEngine::Camera*, ::UnityEngine::Rendering::UISubset)>(&::UnityEngine::Rendering::ScriptableRenderContext::CreateUIOverlayRendererList_Internal)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6b232f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                { "CreateUIOverlayRendererList_Internal", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::UISubset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.CreateWireOverlayRendererList_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RendererList (::UnityEngine::Rendering::ScriptableRenderContext::*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::CreateWireOverlayRendererList_Internal)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6b23464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                                                           { "CreateWireOverlayRendererList_Internal", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.PrepareRendererListsAsync_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ScriptableRenderContext::*)(::System::Object*)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::PrepareRendererListsAsync_Internal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b235c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "PrepareRendererListsAsync_Internal", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.QueryRendererListStatus_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RendererListStatus (::UnityEngine::Rendering::ScriptableRenderContext::*)(::UnityEngine::Rendering::RendererList)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::QueryRendererListStatus_Internal)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6b23604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                                                           { "QueryRendererListStatus_Internal", {}, { ::i2c::type_of<::UnityEngine::Rendering::RendererList>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ScriptableRenderContext::*)(::System::IntPtr)>(&::UnityEngine::Rendering::ScriptableRenderContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b20ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.BeginRenderPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ScriptableRenderContext::*)(
    int32_t, int32_t, int32_t, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AttachmentDescriptor>, int32_t)>(&::UnityEngine::Rendering::ScriptableRenderContext::BeginRenderPass)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6b236d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                { "BeginRenderPass",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AttachmentDescriptor>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.BeginSubPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ScriptableRenderContext::*)(
    ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<int32_t>, bool)>(&::UnityEngine::Rendering::ScriptableRenderContext::BeginSubPass)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6b237ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
            { "BeginSubPass", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.BeginSubPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ScriptableRenderContext::*)(::Unity::Collections::NativeArray_1<int32_t>, bool)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::BeginSubPass)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6b23880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                             { "BeginSubPass", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.EndSubPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ScriptableRenderContext::*)()>(&::UnityEngine::Rendering::ScriptableRenderContext::EndSubPass)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b23944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "EndSubPass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.EndRenderPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ScriptableRenderContext::*)()>(&::UnityEngine::Rendering::ScriptableRenderContext::EndRenderPass)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b239c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "EndRenderPass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.Submit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ScriptableRenderContext::*)()>(&::UnityEngine::Rendering::ScriptableRenderContext::Submit)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b23a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "Submit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.SubmitForRenderPassValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ScriptableRenderContext::*)()>(
    &::UnityEngine::Rendering::ScriptableRenderContext::SubmitForRenderPassValidation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b23ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "SubmitForRenderPassValidation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.HasInvokeOnRenderObjectCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ScriptableRenderContext::*)()>(
    &::UnityEngine::Rendering::ScriptableRenderContext::HasInvokeOnRenderObjectCallbacks)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b23b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "HasInvokeOnRenderObjectCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.GetCameras
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ScriptableRenderContext::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::GetCameras)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6b20ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                             { "GetCameras", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.ExecuteCommandBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ScriptableRenderContext::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::ExecuteCommandBuffer)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6b23b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                                                           { "ExecuteCommandBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.ExecuteCommandBufferAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ScriptableRenderContext::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ComputeQueueType)>(&::UnityEngine::Rendering::ScriptableRenderContext::ExecuteCommandBufferAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6b23c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                            { "ExecuteCommandBufferAsync", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ComputeQueueType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.SetupCameraProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ScriptableRenderContext::*)(::UnityEngine::Camera*, bool)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::SetupCameraProperties)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6b23d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                                                           { "SetupCameraProperties", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.SetupCameraProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ScriptableRenderContext::*)(::UnityEngine::Camera*, bool, int32_t)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::SetupCameraProperties)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b23df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                             { "SetupCameraProperties", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.DrawWireOverlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ScriptableRenderContext::*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::DrawWireOverlay)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b23e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "DrawWireOverlay", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.Cull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CullingResults (::UnityEngine::Rendering::ScriptableRenderContext::*)(
    ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>)>(&::UnityEngine::Rendering::ScriptableRenderContext::Cull)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6b23edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                                                           { "Cull", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.CullShadowCasters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ScriptableRenderContext::*)(
    ::UnityEngine::Rendering::CullingResults, ::UnityEngine::Rendering::ShadowCastersCullingInfos)>(&::UnityEngine::Rendering::ScriptableRenderContext::CullShadowCasters)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6b23f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                            { "CullShadowCasters", {}, { ::i2c::type_of<::UnityEngine::Rendering::CullingResults>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastersCullingInfos>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ScriptableRenderContext::*)(::UnityEngine::Rendering::ScriptableRenderContext)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::Equals)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6b24028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ScriptableRenderContext::*)(::System::Object*)>(&::UnityEngine::Rendering::ScriptableRenderContext::Equals)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6b24080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { ::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ScriptableRenderContext::*)()>(&::UnityEngine::Rendering::ScriptableRenderContext::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b2415c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { ::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.CreateRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RendererList (::UnityEngine::Rendering::ScriptableRenderContext::*)(
    ::by_ref<::UnityEngine::Rendering::RendererListParams>)>(&::UnityEngine::Rendering::ScriptableRenderContext::CreateRendererList)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6b24164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                             { "CreateRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererListParams>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.CreateShadowRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RendererList (::UnityEngine::Rendering::ScriptableRenderContext::*)(
    ::by_ref<::UnityEngine::Rendering::ShadowDrawingSettings>)>(&::UnityEngine::Rendering::ScriptableRenderContext::CreateShadowRendererList)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b2428c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                             { "CreateShadowRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowDrawingSettings>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.CreateSkyboxRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RendererList (::UnityEngine::Rendering::ScriptableRenderContext::*)(
    ::UnityEngine::Camera*, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::CreateSkyboxRendererList)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6b24320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                             { "CreateSkyboxRendererList",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(),
                                                                 ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.CreateSkyboxRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RendererList (::UnityEngine::Rendering::ScriptableRenderContext::*)(
    ::UnityEngine::Camera*, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(&::UnityEngine::Rendering::ScriptableRenderContext::CreateSkyboxRendererList)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6b24478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                            { "CreateSkyboxRendererList", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.CreateSkyboxRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RendererList (::UnityEngine::Rendering::ScriptableRenderContext::*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::CreateSkyboxRendererList)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6b245f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "CreateSkyboxRendererList", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.CreateGizmoRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RendererList (::UnityEngine::Rendering::ScriptableRenderContext::*)(
    ::UnityEngine::Camera*, ::UnityEngine::Rendering::GizmoSubset)>(&::UnityEngine::Rendering::ScriptableRenderContext::CreateGizmoRendererList)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6b24764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                { "CreateGizmoRendererList", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::GizmoSubset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.CreateUIOverlayRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RendererList (::UnityEngine::Rendering::ScriptableRenderContext::*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::CreateUIOverlayRendererList)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b24804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "CreateUIOverlayRendererList", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.CreateUIOverlayRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RendererList (::UnityEngine::Rendering::ScriptableRenderContext::*)(
    ::UnityEngine::Camera*, ::UnityEngine::Rendering::UISubset)>(&::UnityEngine::Rendering::ScriptableRenderContext::CreateUIOverlayRendererList)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6b2489c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                { "CreateUIOverlayRendererList", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::UISubset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.CreateWireOverlayRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RendererList (::UnityEngine::Rendering::ScriptableRenderContext::*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::CreateWireOverlayRendererList)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b2493c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "CreateWireOverlayRendererList", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.PrepareRendererListsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ScriptableRenderContext::*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererList>*)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::PrepareRendererListsAsync)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6b249d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                { "PrepareRendererListsAsync", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererList>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.QueryRendererListStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RendererListStatus (::UnityEngine::Rendering::ScriptableRenderContext::*)(::UnityEngine::Rendering::RendererList)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::QueryRendererListStatus)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b24a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                                                           { "QueryRendererListStatus", {}, { ::i2c::type_of<::UnityEngine::Rendering::RendererList>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.Internal_Cull_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>, ::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>,
                                                                ::System::IntPtr)>(&::UnityEngine::Rendering::ScriptableRenderContext::Internal_Cull_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b224fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                             { "Internal_Cull_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.Internal_CullShadowCasters_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>, ::System::IntPtr)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::Internal_CullShadowCasters_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b225dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                            { "Internal_CullShadowCasters_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.InitializeSortSettings_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Rendering::SortingSettings>)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::InitializeSortSettings_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b226d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                         { "InitializeSortSettings_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SortingSettings>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.EmitGeometryForCamera_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Rendering::ScriptableRenderContext::EmitGeometryForCamera_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b22890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "EmitGeometryForCamera_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.ExecuteCommandBuffer_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>, ::System::IntPtr)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::ExecuteCommandBuffer_Internal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b2295c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                            { "ExecuteCommandBuffer_Internal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.ExecuteCommandBufferAsync_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>, ::System::IntPtr, ::UnityEngine::Rendering::ComputeQueueType)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::ExecuteCommandBufferAsync_Internal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b22a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                                                           { "ExecuteCommandBufferAsync_Internal_Injected",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(),
                                                                                               ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ComputeQueueType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.SetupCameraProperties_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>, ::System::IntPtr, bool, int32_t)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::SetupCameraProperties_Internal_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b22b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                                                           { "SetupCameraProperties_Internal_Injected",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(),
                                                                                               ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.DrawWireOverlay_Impl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>, ::System::IntPtr)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::DrawWireOverlay_Impl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b22cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                            { "DrawWireOverlay_Impl_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.CreateRendererList_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>, ::System::IntPtr, ::by_ref<::UnityEngine::Rendering::DrawingSettings>,
                                                                ::by_ref<::UnityEngine::Rendering::FilteringSettings>, ::by_ref<::UnityEngine::Rendering::ShaderTagId>, bool, ::System::IntPtr,
                                                                ::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Rendering::RendererList>)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::CreateRendererList_Internal_Injected)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b22e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                { "CreateRendererList_Internal_Injected",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::System::IntPtr>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::DrawingSettings>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::FilteringSettings>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShaderTagId>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>(),
                                                    ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.CreateShadowRendererList_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>, ::System::IntPtr, ::by_ref<::UnityEngine::Rendering::RendererList>)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::CreateShadowRendererList_Internal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b22f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                             { "CreateShadowRendererList_Internal_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::System::IntPtr>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.CreateSkyboxRendererList_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>, ::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Matrix4x4>,
    ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Rendering::RendererList>)>(&::UnityEngine::Rendering::ScriptableRenderContext::CreateSkyboxRendererList_Internal_Injected)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b230f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                            { "CreateSkyboxRendererList_Internal_Injected",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.CreateGizmoRendererList_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>, ::System::IntPtr, ::UnityEngine::Rendering::GizmoSubset, ::by_ref<::UnityEngine::Rendering::RendererList>)>(
        &::UnityEngine::Rendering::ScriptableRenderContext::CreateGizmoRendererList_Internal_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b23298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                             { "CreateGizmoRendererList_Internal_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::System::IntPtr>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::GizmoSubset>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.CreateUIOverlayRendererList_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>, ::System::IntPtr, ::UnityEngine::Rendering::UISubset, ::by_ref<::UnityEngine::Rendering::RendererList>)>(
        &::UnityEngine::Rendering::ScriptableRenderContext::CreateUIOverlayRendererList_Internal_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b23408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                             { "CreateUIOverlayRendererList_Internal_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::System::IntPtr>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::UISubset>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.CreateWireOverlayRendererList_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>, ::System::IntPtr, ::by_ref<::UnityEngine::Rendering::RendererList>)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::CreateWireOverlayRendererList_Internal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b2356c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                             { "CreateWireOverlayRendererList_Internal_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::System::IntPtr>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.QueryRendererListStatus_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::Rendering::RendererListStatus (*)(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>, ::by_ref<::UnityEngine::Rendering::RendererList>)>(
        &::UnityEngine::Rendering::ScriptableRenderContext::QueryRendererListStatus_Internal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b2368c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                         { "QueryRendererListStatus_Internal_Injected",
                                           {},
                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ScriptableRenderContext::setStaticF_kRenderTypeTag(::UnityEngine::Rendering::ShaderTagId value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderTagId, "kRenderTypeTag", ::UnityEngine::Rendering::ScriptableRenderContext>(
      std::forward<::UnityEngine::Rendering::ShaderTagId>(value));
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Rendering::ScriptableRenderContext::getStaticF_kRenderTypeTag() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderTagId, "kRenderTypeTag", ::UnityEngine::Rendering::ScriptableRenderContext>();
}
inline void UnityEngine::Rendering::ScriptableRenderContext::BeginRenderPass_Internal(::System::IntPtr self, int32_t width, int32_t height, int32_t volumeDepth, int32_t samples,
                                                                                      ::System::IntPtr colors, int32_t colorCount, int32_t depthAttachmentIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                           { "BeginRenderPass_Internal",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, width, height, volumeDepth, samples, colors, colorCount, depthAttachmentIndex);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::BeginSubPass_Internal(::System::IntPtr self, ::System::IntPtr colors, int32_t colorCount, ::System::IntPtr inputs, int32_t inputCount,
                                                                                   bool isDepthReadOnly, bool isStencilReadOnly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                           { "BeginSubPass_Internal",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, colors, colorCount, inputs, inputCount, isDepthReadOnly, isStencilReadOnly);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::EndSubPass_Internal(::System::IntPtr self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "EndSubPass_Internal", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::EndRenderPass_Internal(::System::IntPtr self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "EndRenderPass_Internal", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self);
}
inline bool UnityEngine::Rendering::ScriptableRenderContext::HasInvokeOnRenderObjectCallbacks_Internal() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "HasInvokeOnRenderObjectCallbacks_Internal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::Internal_Cull(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> parameters,
                                                                           ::UnityEngine::Rendering::ScriptableRenderContext renderLoop, ::System::IntPtr results) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                           { "Internal_Cull",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, parameters, renderLoop, results);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::Internal_CullShadowCasters(::UnityEngine::Rendering::ScriptableRenderContext renderLoop, ::System::IntPtr context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                              { "Internal_CullShadowCasters", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderLoop, context);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::InitializeSortSettings(::UnityEngine::Camera* camera, ::by_ref<::UnityEngine::Rendering::SortingSettings> sortingSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                              { "InitializeSortSettings", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SortingSettings>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera, sortingSettings);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::Submit_Internal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "Submit_Internal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::ScriptableRenderContext::SubmitForRenderPassValidation_Internal() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "SubmitForRenderPassValidation_Internal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::GetCameras_Internal(::System::Type* listType, ::System::Object* resultList) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                                                         { "GetCameras_Internal", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, listType, resultList);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::EmitGeometryForCamera(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "EmitGeometryForCamera", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::ExecuteCommandBuffer_Internal(::UnityEngine::Rendering::CommandBuffer* commandBuffer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                                                         { "ExecuteCommandBuffer_Internal", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, commandBuffer);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::ExecuteCommandBufferAsync_Internal(::UnityEngine::Rendering::CommandBuffer* commandBuffer,
                                                                                                ::UnityEngine::Rendering::ComputeQueueType queueType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                          { "ExecuteCommandBufferAsync_Internal", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ComputeQueueType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, commandBuffer, queueType);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::SetupCameraProperties_Internal(::UnityEngine::Camera* camera, bool stereoSetup, int32_t eye) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                           { "SetupCameraProperties_Internal", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, camera, stereoSetup, eye);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::DrawWireOverlay_Impl(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "DrawWireOverlay_Impl", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, camera);
}
inline ::System::IntPtr UnityEngine::Rendering::ScriptableRenderContext::Internal_GetPtr() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "Internal_GetPtr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::RendererList
UnityEngine::Rendering::ScriptableRenderContext::CreateRendererList_Internal(::System::IntPtr cullResults, ::by_ref<::UnityEngine::Rendering::DrawingSettings> drawingSettings,
                                                                             ::by_ref<::UnityEngine::Rendering::FilteringSettings> filteringSettings, ::UnityEngine::Rendering::ShaderTagId tagName,
                                                                             bool isPassTagName, ::System::IntPtr tagValues, ::System::IntPtr stateBlocks, int32_t stateCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                           { "CreateRendererList_Internal",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::DrawingSettings>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::FilteringSettings>>(), ::i2c::type_of<::UnityEngine::Rendering::ShaderTagId>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererList>(*this, ___internal_method, cullResults, drawingSettings, filteringSettings, tagName, isPassTagName, tagValues,
                                                                                     stateBlocks, stateCount);
}
inline ::UnityEngine::Rendering::RendererList UnityEngine::Rendering::ScriptableRenderContext::CreateShadowRendererList_Internal(::System::IntPtr shadowDrawinSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "CreateShadowRendererList_Internal", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererList>(*this, ___internal_method, shadowDrawinSettings);
}
inline ::UnityEngine::Rendering::RendererList UnityEngine::Rendering::ScriptableRenderContext::CreateSkyboxRendererList_Internal(::UnityEngine::Camera* camera, int32_t mode,
                                                                                                                                 ::UnityEngine::Matrix4x4 proj, ::UnityEngine::Matrix4x4 view,
                                                                                                                                 ::UnityEngine::Matrix4x4 projR, ::UnityEngine::Matrix4x4 viewR) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                              { "CreateSkyboxRendererList_Internal",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(),
                                                  ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererList>(*this, ___internal_method, camera, mode, proj, view, projR, viewR);
}
inline ::UnityEngine::Rendering::RendererList UnityEngine::Rendering::ScriptableRenderContext::CreateGizmoRendererList_Internal(::UnityEngine::Camera* camera,
                                                                                                                                ::UnityEngine::Rendering::GizmoSubset gizmoSubset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                              { "CreateGizmoRendererList_Internal", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::GizmoSubset>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererList>(*this, ___internal_method, camera, gizmoSubset);
}
inline ::UnityEngine::Rendering::RendererList UnityEngine::Rendering::ScriptableRenderContext::CreateUIOverlayRendererList_Internal(::UnityEngine::Camera* camera,
                                                                                                                                    ::UnityEngine::Rendering::UISubset uiSubset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                              { "CreateUIOverlayRendererList_Internal", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::UISubset>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererList>(*this, ___internal_method, camera, uiSubset);
}
inline ::UnityEngine::Rendering::RendererList UnityEngine::Rendering::ScriptableRenderContext::CreateWireOverlayRendererList_Internal(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                                                         { "CreateWireOverlayRendererList_Internal", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererList>(*this, ___internal_method, camera);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::PrepareRendererListsAsync_Internal(::System::Object* rendererLists) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "PrepareRendererListsAsync_Internal", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rendererLists);
}
inline ::UnityEngine::Rendering::RendererListStatus UnityEngine::Rendering::ScriptableRenderContext::QueryRendererListStatus_Internal(::UnityEngine::Rendering::RendererList handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                                                         { "QueryRendererListStatus_Internal", {}, { ::i2c::type_of<::UnityEngine::Rendering::RendererList>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererListStatus>(*this, ___internal_method, handle);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::_ctor(::System::IntPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::BeginRenderPass(int32_t width, int32_t height, int32_t samples,
                                                                             ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AttachmentDescriptor> attachments,
                                                                             int32_t depthAttachmentIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                           { "BeginRenderPass",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AttachmentDescriptor>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, width, height, samples, attachments, depthAttachmentIndex);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::BeginSubPass(::Unity::Collections::NativeArray_1<int32_t> colors, ::Unity::Collections::NativeArray_1<int32_t> inputs,
                                                                          bool isDepthStencilReadOnly) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
          { "BeginSubPass", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, colors, inputs, isDepthStencilReadOnly);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::BeginSubPass(::Unity::Collections::NativeArray_1<int32_t> colors, bool isDepthStencilReadOnly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                           { "BeginSubPass", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, colors, isDepthStencilReadOnly);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::EndSubPass() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "EndSubPass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::EndRenderPass() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "EndRenderPass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::Submit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "Submit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::ScriptableRenderContext::SubmitForRenderPassValidation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "SubmitForRenderPassValidation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::ScriptableRenderContext::HasInvokeOnRenderObjectCallbacks() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "HasInvokeOnRenderObjectCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::GetCameras(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* results) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                           { "GetCameras", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, results);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::ExecuteCommandBuffer(::UnityEngine::Rendering::CommandBuffer* commandBuffer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                                                         { "ExecuteCommandBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, commandBuffer);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::ExecuteCommandBufferAsync(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Rendering::ComputeQueueType queueType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                          { "ExecuteCommandBufferAsync", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ComputeQueueType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, commandBuffer, queueType);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::SetupCameraProperties(::UnityEngine::Camera* camera, bool stereoSetup) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                                                         { "SetupCameraProperties", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, camera, stereoSetup);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::SetupCameraProperties(::UnityEngine::Camera* camera, bool stereoSetup, int32_t eye) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                           { "SetupCameraProperties", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, camera, stereoSetup, eye);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::DrawWireOverlay(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "DrawWireOverlay", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, camera);
}
inline ::UnityEngine::Rendering::CullingResults UnityEngine::Rendering::ScriptableRenderContext::Cull(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> parameters) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                                                         { "Cull", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CullingResults>(*this, ___internal_method, parameters);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::CullShadowCasters(::UnityEngine::Rendering::CullingResults cullingResults, ::UnityEngine::Rendering::ShadowCastersCullingInfos infos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                          { "CullShadowCasters", {}, { ::i2c::type_of<::UnityEngine::Rendering::CullingResults>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastersCullingInfos>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cullingResults, infos);
}
inline bool UnityEngine::Rendering::ScriptableRenderContext::Equals(::UnityEngine::Rendering::ScriptableRenderContext other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::ScriptableRenderContext::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::ScriptableRenderContext::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::RendererList UnityEngine::Rendering::ScriptableRenderContext::CreateRendererList(::by_ref<::UnityEngine::Rendering::RendererListParams> param) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                                                         { "CreateRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererListParams>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererList>(*this, ___internal_method, param);
}
inline ::UnityEngine::Rendering::RendererList UnityEngine::Rendering::ScriptableRenderContext::CreateShadowRendererList(::by_ref<::UnityEngine::Rendering::ShadowDrawingSettings> settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                           { "CreateShadowRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowDrawingSettings>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererList>(*this, ___internal_method, settings);
}
inline ::UnityEngine::Rendering::RendererList UnityEngine::Rendering::ScriptableRenderContext::CreateSkyboxRendererList(::UnityEngine::Camera* camera, ::UnityEngine::Matrix4x4 projectionMatrixL,
                                                                                                                        ::UnityEngine::Matrix4x4 viewMatrixL,
                                                                                                                        ::UnityEngine::Matrix4x4 projectionMatrixR,
                                                                                                                        ::UnityEngine::Matrix4x4 viewMatrixR) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                           { "CreateSkyboxRendererList",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(),
                                                               ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererList>(*this, ___internal_method, camera, projectionMatrixL, viewMatrixL, projectionMatrixR, viewMatrixR);
}
inline ::UnityEngine::Rendering::RendererList UnityEngine::Rendering::ScriptableRenderContext::CreateSkyboxRendererList(::UnityEngine::Camera* camera, ::UnityEngine::Matrix4x4 projectionMatrix,
                                                                                                                        ::UnityEngine::Matrix4x4 viewMatrix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                          { "CreateSkyboxRendererList", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererList>(*this, ___internal_method, camera, projectionMatrix, viewMatrix);
}
inline ::UnityEngine::Rendering::RendererList UnityEngine::Rendering::ScriptableRenderContext::CreateSkyboxRendererList(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "CreateSkyboxRendererList", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererList>(*this, ___internal_method, camera);
}
inline ::UnityEngine::Rendering::RendererList UnityEngine::Rendering::ScriptableRenderContext::CreateGizmoRendererList(::UnityEngine::Camera* camera,
                                                                                                                       ::UnityEngine::Rendering::GizmoSubset gizmoSubset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                           { "CreateGizmoRendererList", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::GizmoSubset>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererList>(*this, ___internal_method, camera, gizmoSubset);
}
inline ::UnityEngine::Rendering::RendererList UnityEngine::Rendering::ScriptableRenderContext::CreateUIOverlayRendererList(::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "CreateUIOverlayRendererList", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererList>(*this, ___internal_method, camera);
}
inline ::UnityEngine::Rendering::RendererList UnityEngine::Rendering::ScriptableRenderContext::CreateUIOverlayRendererList(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::UISubset uiSubset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                           { "CreateUIOverlayRendererList", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::UISubset>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererList>(*this, ___internal_method, camera, uiSubset);
}
inline ::UnityEngine::Rendering::RendererList UnityEngine::Rendering::ScriptableRenderContext::CreateWireOverlayRendererList(::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "CreateWireOverlayRendererList", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererList>(*this, ___internal_method, camera);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::PrepareRendererListsAsync(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererList>* rendererLists) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                              { "PrepareRendererListsAsync", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererList>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rendererLists);
}
inline ::UnityEngine::Rendering::RendererListStatus UnityEngine::Rendering::ScriptableRenderContext::QueryRendererListStatus(::UnityEngine::Rendering::RendererList rendererList) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                                                         { "QueryRendererListStatus", {}, { ::i2c::type_of<::UnityEngine::Rendering::RendererList>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererListStatus>(*this, ___internal_method, rendererList);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::Internal_Cull_Injected(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> parameters,
                                                                                    ::by_ref<::UnityEngine::Rendering::ScriptableRenderContext> renderLoop, ::System::IntPtr results) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                           { "Internal_Cull_Injected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, parameters, renderLoop, results);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::Internal_CullShadowCasters_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext> renderLoop, ::System::IntPtr context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                          { "Internal_CullShadowCasters_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderLoop, context);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::InitializeSortSettings_Injected(::System::IntPtr camera, ::by_ref<::UnityEngine::Rendering::SortingSettings> sortingSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                       { "InitializeSortSettings_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SortingSettings>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera, sortingSettings);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::EmitGeometryForCamera_Injected(::System::IntPtr camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "EmitGeometryForCamera_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::ExecuteCommandBuffer_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self,
                                                                                                    ::System::IntPtr commandBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                          { "ExecuteCommandBuffer_Internal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, commandBuffer);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::ExecuteCommandBufferAsync_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self,
                                                                                                         ::System::IntPtr commandBuffer, ::UnityEngine::Rendering::ComputeQueueType queueType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                                                         { "ExecuteCommandBufferAsync_Internal_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(),
                                                                                             ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ComputeQueueType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, commandBuffer, queueType);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::SetupCameraProperties_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::System::IntPtr camera,
                                                                                                     bool stereoSetup, int32_t eye) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                                                         { "SetupCameraProperties_Internal_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(),
                                                                                             ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, camera, stereoSetup, eye);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::DrawWireOverlay_Impl_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::System::IntPtr camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                          { "DrawWireOverlay_Impl_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, camera);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::CreateRendererList_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::System::IntPtr cullResults,
                                                                                                  ::by_ref<::UnityEngine::Rendering::DrawingSettings> drawingSettings,
                                                                                                  ::by_ref<::UnityEngine::Rendering::FilteringSettings> filteringSettings,
                                                                                                  ::by_ref<::UnityEngine::Rendering::ShaderTagId> tagName, bool isPassTagName,
                                                                                                  ::System::IntPtr tagValues, ::System::IntPtr stateBlocks, int32_t stateCount,
                                                                                                  ::by_ref<::UnityEngine::Rendering::RendererList> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                              { "CreateRendererList_Internal_Injected",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::System::IntPtr>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::DrawingSettings>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::FilteringSettings>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShaderTagId>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>(),
                                                  ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, cullResults, drawingSettings, filteringSettings, tagName, isPassTagName, tagValues, stateBlocks,
                                                   stateCount, ret);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::CreateShadowRendererList_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self,
                                                                                                        ::System::IntPtr shadowDrawinSettings, ::by_ref<::UnityEngine::Rendering::RendererList> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                           { "CreateShadowRendererList_Internal_Injected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::System::IntPtr>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, shadowDrawinSettings, ret);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::CreateSkyboxRendererList_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self,
                                                                                                        ::System::IntPtr camera, int32_t mode, ::by_ref<::UnityEngine::Matrix4x4> proj,
                                                                                                        ::by_ref<::UnityEngine::Matrix4x4> view, ::by_ref<::UnityEngine::Matrix4x4> projR,
                                                                                                        ::by_ref<::UnityEngine::Matrix4x4> viewR,
                                                                                                        ::by_ref<::UnityEngine::Rendering::RendererList> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                          { "CreateSkyboxRendererList_Internal_Injected",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, camera, mode, proj, view, projR, viewR, ret);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::CreateGizmoRendererList_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::System::IntPtr camera,
                                                                                                       ::UnityEngine::Rendering::GizmoSubset gizmoSubset,
                                                                                                       ::by_ref<::UnityEngine::Rendering::RendererList> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                           { "CreateGizmoRendererList_Internal_Injected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::System::IntPtr>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::GizmoSubset>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, camera, gizmoSubset, ret);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::CreateUIOverlayRendererList_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self,
                                                                                                           ::System::IntPtr camera, ::UnityEngine::Rendering::UISubset uiSubset,
                                                                                                           ::by_ref<::UnityEngine::Rendering::RendererList> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                           { "CreateUIOverlayRendererList_Internal_Injected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::System::IntPtr>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::UISubset>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, camera, uiSubset, ret);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::CreateWireOverlayRendererList_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self,
                                                                                                             ::System::IntPtr camera, ::by_ref<::UnityEngine::Rendering::RendererList> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                           { "CreateWireOverlayRendererList_Internal_Injected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::System::IntPtr>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, camera, ret);
}
inline ::UnityEngine::Rendering::RendererListStatus
UnityEngine::Rendering::ScriptableRenderContext::QueryRendererListStatus_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self,
                                                                                           ::by_ref<::UnityEngine::Rendering::RendererList> handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                       { "QueryRendererListStatus_Internal_Injected",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererListStatus>(nullptr, ___internal_method, _unity_self, handle);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>"
constexpr UnityEngine::Rendering::ScriptableRenderContext::operator ::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>*
UnityEngine::Rendering::ScriptableRenderContext::i___System__IEquatable_1___UnityEngine__Rendering__ScriptableRenderContext_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ScriptableRenderContext::ScriptableRenderContext(::System::IntPtr m_Ptr) noexcept {
  this->m_Ptr = m_Ptr;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ScriptableRenderContext::ScriptableRenderContext() {}
