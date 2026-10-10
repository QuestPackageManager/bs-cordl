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
// Ctor Parameters [CppParam { name: "cullResults", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "splitBuffer", ty:
// "::UnityEngine::Rendering::ShadowSplitData*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "splitBufferLength", ty: "int32_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "perLightInfos", ty: "::UnityEngine::Rendering::LightShadowCasterCullingInfo*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "perLightInfoCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
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
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.HasInvokeOnRenderObjectCallbacks_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::ScriptableRenderContext::HasInvokeOnRenderObjectCallbacks_Internal)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6f835e0;

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
  constexpr static std::size_t addrs = 0x6f83608;

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
  constexpr static std::size_t addrs = 0x6f836f0;

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
  constexpr static std::size_t addrs = 0x6f837c0;

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
  constexpr static std::size_t addrs = 0x6f838bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "Submit_Internal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.GetCameras_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ScriptableRenderContext::*)(::System::Type*, ::System::Object*)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::GetCameras_Internal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f838f8;

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
  constexpr static std::size_t addrs = 0x6f8394c;

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
  constexpr static std::size_t addrs = 0x6f83a30;

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
  constexpr static std::size_t addrs = 0x6f83b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                         { "ExecuteCommandBufferAsync_Internal", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ComputeQueueType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.Internal_GetPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::Rendering::ScriptableRenderContext::*)()>(
    &::UnityEngine::Rendering::ScriptableRenderContext::Internal_GetPtr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f83bf0;

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
  constexpr static std::size_t addrs = 0x6f83bf8;

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
  constexpr static std::size_t addrs = 0x6f83da0;

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
  constexpr static std::size_t addrs = 0x6f83ea8;

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
  constexpr static std::size_t addrs = 0x6f84078;

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
  constexpr static std::size_t addrs = 0x6f841e8;

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
  constexpr static std::size_t addrs = 0x6f84358;

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
  constexpr static std::size_t addrs = 0x6f844b4;

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
  constexpr static std::size_t addrs = 0x6f844f8;

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
  constexpr static std::size_t addrs = 0x6f820bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.Submit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ScriptableRenderContext::*)()>(&::UnityEngine::Rendering::ScriptableRenderContext::Submit)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6f845c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "Submit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.HasInvokeOnRenderObjectCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ScriptableRenderContext::*)()>(
    &::UnityEngine::Rendering::ScriptableRenderContext::HasInvokeOnRenderObjectCallbacks)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6f8463c;

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
  constexpr static std::size_t addrs = 0x6f820c4;

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
  constexpr static std::size_t addrs = 0x6f846a8;

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
  constexpr static std::size_t addrs = 0x6f84798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                            { "ExecuteCommandBufferAsync", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ComputeQueueType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.Cull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CullingResults (::UnityEngine::Rendering::ScriptableRenderContext::*)(
    ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>)>(&::UnityEngine::Rendering::ScriptableRenderContext::Cull)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6f84890;

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
  constexpr static std::size_t addrs = 0x6f84914;

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
  constexpr static std::size_t addrs = 0x6f849dc;

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
  constexpr static std::size_t addrs = 0x6f84a34;

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
  constexpr static std::size_t addrs = 0x6f84b10;

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
  constexpr static std::size_t addrs = 0x6f84b18;

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
  constexpr static std::size_t addrs = 0x6f84c40;

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
  constexpr static std::size_t addrs = 0x6f84cd4;

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
  constexpr static std::size_t addrs = 0x6f84e2c;

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
  constexpr static std::size_t addrs = 0x6f84fa8;

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
  constexpr static std::size_t addrs = 0x6f85118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                { "CreateGizmoRendererList", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::GizmoSubset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.CreateUIOverlayRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RendererList (::UnityEngine::Rendering::ScriptableRenderContext::*)(
    ::UnityEngine::Camera*, ::UnityEngine::Rendering::UISubset)>(&::UnityEngine::Rendering::ScriptableRenderContext::CreateUIOverlayRendererList)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6f851b8;

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
  constexpr static std::size_t addrs = 0x6f85258;

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
  constexpr static std::size_t addrs = 0x6f852ec;

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
  constexpr static std::size_t addrs = 0x6f85374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                                                           { "QueryRendererListStatus", {}, { ::i2c::type_of<::UnityEngine::Rendering::RendererList>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.Internal_Cull_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>, ::by_ref<::UnityEngine::Rendering::ScriptableRenderContext const>,
                                                                ::System::IntPtr)>(&::UnityEngine::Rendering::ScriptableRenderContext::Internal_Cull_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f8369c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                             { "Internal_Cull_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext const>>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.Internal_CullShadowCasters_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext const>, ::System::IntPtr)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::Internal_CullShadowCasters_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f8377c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                         { "Internal_CullShadowCasters_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext const>>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.InitializeSortSettings_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Rendering::SortingSettings>)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::InitializeSortSettings_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f83878;

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
  constexpr static std::size_t addrs = 0x6f839f4;

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
  constexpr static std::size_t addrs = 0x6f83ac0;

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
  constexpr static std::size_t addrs = 0x6f83b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                                                           { "ExecuteCommandBufferAsync_Internal_Injected",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(),
                                                                                               ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ComputeQueueType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.CreateRendererList_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>, ::System::IntPtr, ::by_ref<::UnityEngine::Rendering::DrawingSettings>,
                                                                ::by_ref<::UnityEngine::Rendering::FilteringSettings>, ::by_ref<::UnityEngine::Rendering::ShaderTagId const>, bool, ::System::IntPtr,
                                                                ::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Rendering::RendererList>)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::CreateRendererList_Internal_Injected)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6f83cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                { "CreateRendererList_Internal_Injected",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::System::IntPtr>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::DrawingSettings>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::FilteringSettings>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShaderTagId const>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>(),
                                                    ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.CreateShadowRendererList_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>, ::System::IntPtr, ::by_ref<::UnityEngine::Rendering::RendererList>)>(
    &::UnityEngine::Rendering::ScriptableRenderContext::CreateShadowRendererList_Internal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f83e54;

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

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>, ::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Matrix4x4 const>, ::by_ref<::UnityEngine::Matrix4x4 const>,
                         ::by_ref<::UnityEngine::Matrix4x4 const>, ::by_ref<::UnityEngine::Matrix4x4 const>, ::by_ref<::UnityEngine::Rendering::RendererList>)>(
        &::UnityEngine::Rendering::ScriptableRenderContext::CreateSkyboxRendererList_Internal_Injected)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6f83fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                             { "CreateSkyboxRendererList_Internal_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::System::IntPtr>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4 const>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4 const>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4 const>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4 const>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ScriptableRenderContext.CreateGizmoRendererList_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>, ::System::IntPtr, ::UnityEngine::Rendering::GizmoSubset, ::by_ref<::UnityEngine::Rendering::RendererList>)>(
        &::UnityEngine::Rendering::ScriptableRenderContext::CreateGizmoRendererList_Internal_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6f8418c;

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
  constexpr static std::size_t addrs = 0x6f842fc;

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
  constexpr static std::size_t addrs = 0x6f84460;

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
    static_cast<::UnityEngine::Rendering::RendererListStatus (*)(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>, ::by_ref<::UnityEngine::Rendering::RendererList const>)>(
        &::UnityEngine::Rendering::ScriptableRenderContext::QueryRendererListStatus_Internal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f84580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                            { "QueryRendererListStatus_Internal_Injected",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList const>>() } })));
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
inline ::UnityEngine::Rendering::RendererList UnityEngine::Rendering::ScriptableRenderContext::CreateSkyboxRendererList_Internal(/* [NotNull] */ ::UnityEngine::Camera* camera, int32_t mode,
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
inline ::UnityEngine::Rendering::RendererList UnityEngine::Rendering::ScriptableRenderContext::CreateGizmoRendererList_Internal(/* [NotNull] */ ::UnityEngine::Camera* camera,
                                                                                                                                ::UnityEngine::Rendering::GizmoSubset gizmoSubset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                              { "CreateGizmoRendererList_Internal", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::GizmoSubset>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererList>(*this, ___internal_method, camera, gizmoSubset);
}
inline ::UnityEngine::Rendering::RendererList UnityEngine::Rendering::ScriptableRenderContext::CreateUIOverlayRendererList_Internal(/* [NotNull] */ ::UnityEngine::Camera* camera,
                                                                                                                                    ::UnityEngine::Rendering::UISubset uiSubset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                              { "CreateUIOverlayRendererList_Internal", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::UISubset>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererList>(*this, ___internal_method, camera, uiSubset);
}
inline ::UnityEngine::Rendering::RendererList UnityEngine::Rendering::ScriptableRenderContext::CreateWireOverlayRendererList_Internal(/* [NotNull] */ ::UnityEngine::Camera* camera) {
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
inline void UnityEngine::Rendering::ScriptableRenderContext::Submit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "Submit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
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
                                                                                    ::by_ref<::UnityEngine::Rendering::ScriptableRenderContext const> renderLoop, ::System::IntPtr results) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                           { "Internal_Cull_Injected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext const>>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, parameters, renderLoop, results);
}
inline void UnityEngine::Rendering::ScriptableRenderContext::Internal_CullShadowCasters_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext const> renderLoop,
                                                                                                 ::System::IntPtr context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                          { "Internal_CullShadowCasters_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext const>>(), ::i2c::type_of<::System::IntPtr>() } })));
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
inline void UnityEngine::Rendering::ScriptableRenderContext::CreateRendererList_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::System::IntPtr cullResults,
                                                                                                  ::by_ref<::UnityEngine::Rendering::DrawingSettings> drawingSettings,
                                                                                                  ::by_ref<::UnityEngine::Rendering::FilteringSettings> filteringSettings,
                                                                                                  ::by_ref<::UnityEngine::Rendering::ShaderTagId const> tagName, bool isPassTagName,
                                                                                                  ::System::IntPtr tagValues, ::System::IntPtr stateBlocks, int32_t stateCount,
                                                                                                  ::by_ref<::UnityEngine::Rendering::RendererList> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                              { "CreateRendererList_Internal_Injected",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::System::IntPtr>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::DrawingSettings>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::FilteringSettings>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShaderTagId const>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>(),
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
                                                                                                        ::System::IntPtr camera, int32_t mode, ::by_ref<::UnityEngine::Matrix4x4 const> proj,
                                                                                                        ::by_ref<::UnityEngine::Matrix4x4 const> view, ::by_ref<::UnityEngine::Matrix4x4 const> projR,
                                                                                                        ::by_ref<::UnityEngine::Matrix4x4 const> viewR,
                                                                                                        ::by_ref<::UnityEngine::Rendering::RendererList> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                           { "CreateSkyboxRendererList_Internal_Injected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(), ::i2c::type_of<::System::IntPtr>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4 const>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4 const>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4 const>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4 const>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>() } })));
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
                                                                                           ::by_ref<::UnityEngine::Rendering::RendererList const> handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ScriptableRenderContext>(), { "QueryRendererListStatus_Internal_Injected",
                                                                                                                      {},
                                                                                                                      { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>(),
                                                                                                                        ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList const>>() } })));
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
// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::ScriptableRenderContext::ScriptableRenderContext(::System::IntPtr m_Ptr) noexcept {
  this->m_Ptr = m_Ptr;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ScriptableRenderContext::ScriptableRenderContext() {}
