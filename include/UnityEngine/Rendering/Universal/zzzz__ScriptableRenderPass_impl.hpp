#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\ScriptableRenderPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPassInput_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ClearFlag_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IRenderGraphRecorder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugHandler_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderGraphSettings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPassInput_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalLightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ClearFlag_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "UnityEngine/Rendering/zzzz__SortingCriteria_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.FrameCleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::FrameCleanup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6863aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.get_renderPassEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::RenderPassEvent (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::get_renderPassEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6863ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_renderPassEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.set_renderPassEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(::UnityEngine::Rendering::Universal::RenderPassEvent)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::set_renderPassEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6863ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                                                           { "set_renderPassEvent", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.get_colorAttachments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::get_colorAttachments)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6863ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_colorAttachments", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.get_colorAttachment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::get_colorAttachment)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6863b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_colorAttachment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.get_depthAttachment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::get_depthAttachment)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6863b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_depthAttachment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.get_colorAttachmentHandles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::RTHandle*> (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::get_colorAttachmentHandles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6863bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_colorAttachmentHandles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.get_colorAttachmentHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::get_colorAttachmentHandle)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6863bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_colorAttachmentHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.get_depthAttachmentHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::get_depthAttachmentHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6863bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_depthAttachmentHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.get_colorStoreActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction> (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::get_colorStoreActions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6863be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_colorStoreActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.get_depthStoreAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderBufferStoreAction (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::get_depthStoreAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6863bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_depthStoreAction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.get_overriddenColorStoreActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::get_overriddenColorStoreActions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6863bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_overriddenColorStoreActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.get_overriddenDepthStoreAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::get_overriddenDepthStoreAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6863bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_overriddenDepthStoreAction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.get_input
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::ScriptableRenderPassInput (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::get_input)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6863c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_input", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.get_clearFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ClearFlag (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::get_clearFlag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6863c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_clearFlag", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.get_clearColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::get_clearColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6863c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_clearColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.get_requiresIntermediateTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::get_requiresIntermediateTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6863c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_requiresIntermediateTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.set_requiresIntermediateTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(bool)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::set_requiresIntermediateTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6863c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "set_requiresIntermediateTexture", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.get_profilingSampler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ProfilingSampler* (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::get_profilingSampler)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6854ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_profilingSampler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.set_profilingSampler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(::UnityEngine::Rendering::ProfilingSampler*)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::set_profilingSampler)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6854050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                                                           { "set_profilingSampler", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProfilingSampler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.get_passName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::get_passName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6863c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_passName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.get_overrideCameraTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::get_overrideCameraTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6863c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_overrideCameraTarget", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.set_overrideCameraTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(bool)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::set_overrideCameraTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6863c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "set_overrideCameraTarget", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.get_isBlitRenderPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::get_isBlitRenderPass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6863c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_isBlitRenderPass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.set_isBlitRenderPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(bool)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::set_isBlitRenderPass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6863c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "set_isBlitRenderPass", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.get_useNativeRenderPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::get_useNativeRenderPass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6863c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_useNativeRenderPass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.set_useNativeRenderPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(bool)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::set_useNativeRenderPass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6863c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "set_useNativeRenderPass", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.get_breakGBufferAndDeferredRenderPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::get_breakGBufferAndDeferredRenderPass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6863c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_breakGBufferAndDeferredRenderPass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.set_breakGBufferAndDeferredRenderPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(bool)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::set_breakGBufferAndDeferredRenderPass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6863c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "set_breakGBufferAndDeferredRenderPass", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.get_renderPassQueueIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::get_renderPassQueueIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6863c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_renderPassQueueIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.set_renderPassQueueIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::set_renderPassQueueIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6863c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "set_renderPassQueueIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.get_renderTargetFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat> (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::get_renderTargetFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6863c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_renderTargetFormat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.set_renderTargetFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat>)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::set_renderTargetFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6863c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                             { "set_renderTargetFormat", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.GetActiveDebugHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DebugHandler* (*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::GetActiveDebugHandler)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6863c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                             { "GetActiveDebugHandler", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderPass::_ctor)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x6853dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.ConfigureInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(::UnityEngine::Rendering::Universal::ScriptableRenderPassInput)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6863ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                             { "ConfigureInput", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPassInput>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.ConfigureColorStoreAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(::UnityEngine::Rendering::RenderBufferStoreAction, uint32_t)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureColorStoreAction)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6863cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                { "ConfigureColorStoreAction", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.ConfigureColorStoreActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction>)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureColorStoreActions)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6863d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                             { "ConfigureColorStoreActions", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.ConfigureDepthStoreAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(::UnityEngine::Rendering::RenderBufferStoreAction)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureDepthStoreAction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6863e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                             { "ConfigureDepthStoreAction", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.ConfigureInputAttachments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(::UnityEngine::Rendering::RTHandle*, bool)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureInputAttachments)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6863e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                             { "ConfigureInputAttachments", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.ConfigureInputAttachments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(::ArrayW<::UnityEngine::Rendering::RTHandle*>)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureInputAttachments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6863ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                                                           { "ConfigureInputAttachments", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.ConfigureInputAttachments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(::ArrayW<::UnityEngine::Rendering::RTHandle*>, ::ArrayW<bool>)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureInputAttachments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6861210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                { "ConfigureInputAttachments", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::ArrayW<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.SetInputAttachmentTransient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(int32_t, bool)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::SetInputAttachmentTransient)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6863ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                                                           { "SetInputAttachmentTransient", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.IsInputAttachmentTransient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::IsInputAttachmentTransient)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6863f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "IsInputAttachmentTransient", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.ResetTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::ResetTarget)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6863f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "ResetTarget", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.ConfigureTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureTarget)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6863f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                            { "ConfigureTarget", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.ConfigureTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureTarget)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6863fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                { "ConfigureTarget", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.ConfigureTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(
    ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>, ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureTarget)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x686407c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
            { "ConfigureTarget", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.ConfigureTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(
    ::ArrayW<::UnityEngine::Rendering::RTHandle*>, ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureTarget)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x6854598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                         { "ConfigureTarget", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.ConfigureTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(
    ::ArrayW<::UnityEngine::Rendering::RTHandle*>, ::UnityEngine::Rendering::RTHandle*, ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat>)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureTarget)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x68640c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                             { "ConfigureTarget",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                                 ::i2c::type_of<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.ConfigureTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureTarget)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6864144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                                                           { "ConfigureTarget", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.ConfigureTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureTarget)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6864190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                                                           { "ConfigureTarget", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.ConfigureTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureTarget)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6864204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                             { "ConfigureTarget", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.ConfigureTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(::ArrayW<::UnityEngine::Rendering::RTHandle*>)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureTarget)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6864250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                                                           { "ConfigureTarget", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.ConfigureClear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x68642c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                             { "ConfigureClear", {}, { ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.OnCameraSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderPass::OnCameraSetup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68642d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.Configure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor)>(&::UnityEngine::Rendering::Universal::ScriptableRenderPass::Configure)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68642d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.OnCameraCleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::OnCameraCleanup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68642dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.OnFinishCameraStackRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::OnFinishCameraStackRendering)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68642e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderPass::Execute)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x68642e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x68643a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.Blit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Material*, int32_t)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::Blit)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x686445c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                { "Blit",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.Blit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Material*, int32_t)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::Blit)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x68644a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                             { "Blit",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.Blit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>, ::UnityEngine::Material*, int32_t)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::Blit)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x68645d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                { "Blit",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>(),
                                                    ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.Blit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Material*, int32_t)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::Blit)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x68646ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                { "Blit",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.CreateDrawingSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DrawingSettings (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(
    ::UnityEngine::Rendering::ShaderTagId, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>, ::UnityEngine::Rendering::SortingCriteria)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::CreateDrawingSettings)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6864748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                { "CreateDrawingSettings",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::ShaderTagId>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::SortingCriteria>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.CreateDrawingSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DrawingSettings (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(
    ::UnityEngine::Rendering::ShaderTagId, ::UnityEngine::Rendering::Universal::UniversalRenderingData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
    ::UnityEngine::Rendering::Universal::UniversalLightData*, ::UnityEngine::Rendering::SortingCriteria)>(&::UnityEngine::Rendering::Universal::ScriptableRenderPass::CreateDrawingSettings)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x68648b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                { "CreateDrawingSettings",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::ShaderTagId>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::UnityEngine::Rendering::SortingCriteria>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.CreateDrawingSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DrawingSettings (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>, ::UnityEngine::Rendering::SortingCriteria)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::CreateDrawingSettings)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6864990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                { "CreateDrawingSettings",
                                                  {},
                                                  { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>(), ::i2c::type_of<::UnityEngine::Rendering::SortingCriteria>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.CreateDrawingSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DrawingSettings (::UnityEngine::Rendering::Universal::ScriptableRenderPass::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*, ::UnityEngine::Rendering::Universal::UniversalRenderingData*,
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::UniversalLightData*, ::UnityEngine::Rendering::SortingCriteria)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::CreateDrawingSettings)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6864af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                            { "CreateDrawingSettings",
                              {},
                              { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::UnityEngine::Rendering::SortingCriteria>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::op_LessThan)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6864bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
            { "op_LessThan", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::op_GreaterThan)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6864c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
            { "op_GreaterThan", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderPass.GetRenderPassEventRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Rendering::Universal::RenderPassEvent)>(
    &::UnityEngine::Rendering::Universal::ScriptableRenderPass::GetRenderPassEventRange)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6864c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                             { "GetRenderPassEventRange", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get__renderPassEvent_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderPassEvent_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent const& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get__renderPassEvent_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderPassEvent_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_set__renderPassEvent_k__BackingField(::UnityEngine::Rendering::Universal::RenderPassEvent value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderPassEvent_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction>& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_ColorStoreActions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorStoreActions;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction> const& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_ColorStoreActions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorStoreActions;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_set_m_ColorStoreActions(::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColorStoreActions = value;
}
constexpr ::UnityEngine::Rendering::RenderBufferStoreAction& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_DepthStoreAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthStoreAction;
}
constexpr ::UnityEngine::Rendering::RenderBufferStoreAction const& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_DepthStoreAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthStoreAction;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_set_m_DepthStoreAction(::UnityEngine::Rendering::RenderBufferStoreAction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepthStoreAction = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get__requiresIntermediateTexture_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requiresIntermediateTexture_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get__requiresIntermediateTexture_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requiresIntermediateTexture_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_set__requiresIntermediateTexture_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requiresIntermediateTexture_k__BackingField = value;
}
constexpr ::ArrayW<bool>& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_OverriddenColorStoreActions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OverriddenColorStoreActions;
}
constexpr ::ArrayW<bool> const& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_OverriddenColorStoreActions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OverriddenColorStoreActions;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_set_m_OverriddenColorStoreActions(::ArrayW<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OverriddenColorStoreActions = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_OverriddenDepthStoreAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OverriddenDepthStoreAction;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_OverriddenDepthStoreAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OverriddenDepthStoreAction;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_set_m_OverriddenDepthStoreAction(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OverriddenDepthStoreAction = value;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_ProfingSampler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfingSampler;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler* const& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_ProfingSampler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfingSampler;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_set_m_ProfingSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProfingSampler = value;
}
constexpr ::StringW& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_PassName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassName;
}
constexpr ::StringW const& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_PassName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassName;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_set_m_PassName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PassName = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderGraphSettings*& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_RenderGraphSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderGraphSettings;
}
constexpr ::UnityEngine::Rendering::Universal::RenderGraphSettings* const& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_RenderGraphSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderGraphSettings;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_set_m_RenderGraphSettings(::UnityEngine::Rendering::Universal::RenderGraphSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderGraphSettings = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get__overrideCameraTarget_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideCameraTarget_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get__overrideCameraTarget_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideCameraTarget_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_set__overrideCameraTarget_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideCameraTarget_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get__isBlitRenderPass_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isBlitRenderPass_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get__isBlitRenderPass_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isBlitRenderPass_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_set__isBlitRenderPass_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isBlitRenderPass_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get__useNativeRenderPass_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useNativeRenderPass_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get__useNativeRenderPass_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useNativeRenderPass_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_set__useNativeRenderPass_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useNativeRenderPass_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get__breakGBufferAndDeferredRenderPass_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____breakGBufferAndDeferredRenderPass_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get__breakGBufferAndDeferredRenderPass_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____breakGBufferAndDeferredRenderPass_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_set__breakGBufferAndDeferredRenderPass_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____breakGBufferAndDeferredRenderPass_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get__renderPassQueueIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderPassQueueIndex_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get__renderPassQueueIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderPassQueueIndex_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_set__renderPassQueueIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderPassQueueIndex_k__BackingField = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_ColorAttachmentIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorAttachmentIndices;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_ColorAttachmentIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorAttachmentIndices;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_set_m_ColorAttachmentIndices(::Unity::Collections::NativeArray_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColorAttachmentIndices = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_InputAttachmentIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputAttachmentIndices;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_InputAttachmentIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputAttachmentIndices;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_set_m_InputAttachmentIndices(::Unity::Collections::NativeArray_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InputAttachmentIndices = value;
}
constexpr ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat>& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get__renderTargetFormat_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderTargetFormat_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat> const&
UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get__renderTargetFormat_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderTargetFormat_k__BackingField;
}
constexpr void
UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_set__renderTargetFormat_k__BackingField(::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderTargetFormat_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*>& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_ColorAttachments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorAttachments;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*> const& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_ColorAttachments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorAttachments;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_set_m_ColorAttachments(::ArrayW<::UnityEngine::Rendering::RTHandle*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColorAttachments = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*>& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_InputAttachments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputAttachments;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*> const& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_InputAttachments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputAttachments;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_set_m_InputAttachments(::ArrayW<::UnityEngine::Rendering::RTHandle*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InputAttachments = value;
}
constexpr ::ArrayW<bool>& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_InputAttachmentIsTransient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputAttachmentIsTransient;
}
constexpr ::ArrayW<bool> const& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_InputAttachmentIsTransient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputAttachmentIsTransient;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_set_m_InputAttachmentIsTransient(::ArrayW<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InputAttachmentIsTransient = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_DepthAttachment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthAttachment;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_DepthAttachment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthAttachment;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_set_m_DepthAttachment(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepthAttachment = value;
}
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_Input() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Input;
}
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput const& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_Input() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Input;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_set_m_Input(::UnityEngine::Rendering::Universal::ScriptableRenderPassInput value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Input = value;
}
constexpr ::UnityEngine::Rendering::ClearFlag& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_ClearFlag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClearFlag;
}
constexpr ::UnityEngine::Rendering::ClearFlag const& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_ClearFlag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClearFlag;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_set_m_ClearFlag(::UnityEngine::Rendering::ClearFlag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClearFlag = value;
}
constexpr ::UnityEngine::Color& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_ClearColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClearColor;
}
constexpr ::UnityEngine::Color const& UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_get_m_ClearColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClearColor;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderPass::__cordl_internal_set_m_ClearColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClearColor = value;
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::setStaticF_k_CameraTarget(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "k_CameraTarget", ::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(
      std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::ScriptableRenderPass::getStaticF_k_CameraTarget() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "k_CameraTarget", ::UnityEngine::Rendering::Universal::ScriptableRenderPass*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline ::UnityEngine::Rendering::Universal::RenderPassEvent UnityEngine::Rendering::Universal::ScriptableRenderPass::get_renderPassEvent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_renderPassEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderPassEvent>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::set_renderPassEvent(::UnityEngine::Rendering::Universal::RenderPassEvent value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                                                         { "set_renderPassEvent", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> UnityEngine::Rendering::Universal::ScriptableRenderPass::get_colorAttachments() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_colorAttachments", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> UnityEngine::Rendering::Universal::ScriptableRenderPass::get_colorAttachment() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_colorAttachment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::Universal::ScriptableRenderPass::get_depthAttachment() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_depthAttachment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Rendering::RTHandle*> UnityEngine::Rendering::Universal::ScriptableRenderPass::get_colorAttachmentHandles() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_colorAttachmentHandles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::RTHandle*>>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::ScriptableRenderPass::get_colorAttachmentHandle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_colorAttachmentHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::ScriptableRenderPass::get_depthAttachmentHandle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_depthAttachmentHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction> UnityEngine::Rendering::Universal::ScriptableRenderPass::get_colorStoreActions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_colorStoreActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction>>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderBufferStoreAction UnityEngine::Rendering::Universal::ScriptableRenderPass::get_depthStoreAction() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_depthStoreAction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderBufferStoreAction>(this, ___internal_method);
}
inline ::ArrayW<bool> UnityEngine::Rendering::Universal::ScriptableRenderPass::get_overriddenColorStoreActions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_overriddenColorStoreActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderPass::get_overriddenDepthStoreAction() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_overriddenDepthStoreAction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput UnityEngine::Rendering::Universal::ScriptableRenderPass::get_input() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_input", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ScriptableRenderPassInput>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ClearFlag UnityEngine::Rendering::Universal::ScriptableRenderPass::get_clearFlag() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_clearFlag", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ClearFlag>(this, ___internal_method);
}
inline ::UnityEngine::Color UnityEngine::Rendering::Universal::ScriptableRenderPass::get_clearColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_clearColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderPass::get_requiresIntermediateTexture() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_requiresIntermediateTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::set_requiresIntermediateTexture(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "set_requiresIntermediateTexture", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ScriptableRenderPass::get_profilingSampler() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_profilingSampler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProfilingSampler*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::set_profilingSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                                                         { "set_profilingSampler", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProfilingSampler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Rendering::Universal::ScriptableRenderPass::get_passName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_passName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderPass::get_overrideCameraTarget() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_overrideCameraTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::set_overrideCameraTarget(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "set_overrideCameraTarget", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderPass::get_isBlitRenderPass() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_isBlitRenderPass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::set_isBlitRenderPass(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "set_isBlitRenderPass", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderPass::get_useNativeRenderPass() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_useNativeRenderPass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::set_useNativeRenderPass(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "set_useNativeRenderPass", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderPass::get_breakGBufferAndDeferredRenderPass() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_breakGBufferAndDeferredRenderPass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::set_breakGBufferAndDeferredRenderPass(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "set_breakGBufferAndDeferredRenderPass", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::ScriptableRenderPass::get_renderPassQueueIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_renderPassQueueIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::set_renderPassQueueIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "set_renderPassQueueIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat> UnityEngine::Rendering::Universal::ScriptableRenderPass::get_renderTargetFormat() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "get_renderTargetFormat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::set_renderTargetFormat(::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                           { "set_renderTargetFormat", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DebugHandler*
UnityEngine::Rendering::Universal::ScriptableRenderPass::GetActiveDebugHandler(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                           { "GetActiveDebugHandler", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugHandler*>(nullptr, ___internal_method, cameraData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureInput(::UnityEngine::Rendering::Universal::ScriptableRenderPassInput passInput) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                           { "ConfigureInput", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPassInput>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passInput);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureColorStoreAction(::UnityEngine::Rendering::RenderBufferStoreAction storeAction, uint32_t attachmentIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                           { "ConfigureColorStoreAction", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, storeAction, attachmentIndex);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureColorStoreActions(::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction> storeActions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                           { "ConfigureColorStoreActions", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, storeActions);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureDepthStoreAction(::UnityEngine::Rendering::RenderBufferStoreAction storeAction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                           { "ConfigureDepthStoreAction", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, storeAction);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureInputAttachments(::UnityEngine::Rendering::RTHandle* input, bool isTransient) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                           { "ConfigureInputAttachments", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, isTransient);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureInputAttachments(::ArrayW<::UnityEngine::Rendering::RTHandle*> inputs) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                                                         { "ConfigureInputAttachments", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputs);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureInputAttachments(::ArrayW<::UnityEngine::Rendering::RTHandle*> inputs, ::ArrayW<bool> isTransient) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                              { "ConfigureInputAttachments", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::ArrayW<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputs, isTransient);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::SetInputAttachmentTransient(int32_t idx, bool isTransient) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                                                         { "SetInputAttachmentTransient", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx, isTransient);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderPass::IsInputAttachmentTransient(int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "IsInputAttachmentTransient", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, idx);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::ResetTarget() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), { "ResetTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureTarget(::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment,
                                                                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                          { "ConfigureTarget", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorAttachment, depthAttachment);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureTarget(::UnityEngine::Rendering::RTHandle* colorAttachment, ::UnityEngine::Rendering::RTHandle* depthAttachment) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                              { "ConfigureTarget", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorAttachment, depthAttachment);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureTarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> colorAttachments,
                                                                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
          { "ConfigureTarget", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorAttachments, depthAttachment);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureTarget(::ArrayW<::UnityEngine::Rendering::RTHandle*> colorAttachments,
                                                                                     ::UnityEngine::Rendering::RTHandle* depthAttachment) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                              { "ConfigureTarget", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorAttachments, depthAttachment);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureTarget(::ArrayW<::UnityEngine::Rendering::RTHandle*> colorAttachments,
                                                                                     ::UnityEngine::Rendering::RTHandle* depthAttachment,
                                                                                     ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat> formats) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                           { "ConfigureTarget",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                               ::i2c::type_of<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorAttachments, depthAttachment, formats);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureTarget(::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                                                         { "ConfigureTarget", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorAttachment);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureTarget(::UnityEngine::Rendering::RTHandle* colorAttachment) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                                                         { "ConfigureTarget", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorAttachment);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureTarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> colorAttachments) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                                                         { "ConfigureTarget", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorAttachments);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureTarget(::ArrayW<::UnityEngine::Rendering::RTHandle*> colorAttachments) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                                                         { "ConfigureTarget", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorAttachments);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::ConfigureClear(::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                           { "ConfigureClear", {}, { ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clearFlag, clearColor);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                   ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, renderingData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, cameraTextureDescriptor);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::OnFinishCameraStackRendering(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                             ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                       ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::Blit(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier source,
                                                                          ::UnityEngine::Rendering::RenderTargetIdentifier destination, ::UnityEngine::Material* material, int32_t passIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                              { "Blit",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, source, destination, material, passIndex);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::Blit(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source,
                                                                          ::UnityEngine::Rendering::RTHandle* destination, ::UnityEngine::Material* material, int32_t passIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                           { "Blit",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, source, destination, material, passIndex);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::Blit(::UnityEngine::Rendering::CommandBuffer* cmd, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> data,
                                                                          ::UnityEngine::Material* material, int32_t passIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                              { "Blit",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>(),
                                                  ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, data, material, passIndex);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderPass::Blit(::UnityEngine::Rendering::CommandBuffer* cmd, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> data,
                                                                          ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Material* material, int32_t passIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                              { "Blit",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, data, source, material, passIndex);
}
inline ::UnityEngine::Rendering::DrawingSettings UnityEngine::Rendering::Universal::ScriptableRenderPass::CreateDrawingSettings(
    ::UnityEngine::Rendering::ShaderTagId shaderTagId, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData, ::UnityEngine::Rendering::SortingCriteria sortingCriteria) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                           { "CreateDrawingSettings",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::ShaderTagId>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::SortingCriteria>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DrawingSettings>(this, ___internal_method, shaderTagId, renderingData, sortingCriteria);
}
inline ::UnityEngine::Rendering::DrawingSettings UnityEngine::Rendering::Universal::ScriptableRenderPass::CreateDrawingSettings(
    ::UnityEngine::Rendering::ShaderTagId shaderTagId, ::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
    ::UnityEngine::Rendering::Universal::UniversalLightData* lightData, ::UnityEngine::Rendering::SortingCriteria sortingCriteria) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                              { "CreateDrawingSettings",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::ShaderTagId>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::UnityEngine::Rendering::SortingCriteria>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DrawingSettings>(this, ___internal_method, shaderTagId, renderingData, cameraData, lightData, sortingCriteria);
}
inline ::UnityEngine::Rendering::DrawingSettings
UnityEngine::Rendering::Universal::ScriptableRenderPass::CreateDrawingSettings(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* shaderTagIdList,
                                                                               ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
                                                                               ::UnityEngine::Rendering::SortingCriteria sortingCriteria) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                              { "CreateDrawingSettings",
                                                {},
                                                { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>(), ::i2c::type_of<::UnityEngine::Rendering::SortingCriteria>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DrawingSettings>(this, ___internal_method, shaderTagIdList, renderingData, sortingCriteria);
}
inline ::UnityEngine::Rendering::DrawingSettings UnityEngine::Rendering::Universal::ScriptableRenderPass::CreateDrawingSettings(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* shaderTagIdList, ::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
    ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
    ::UnityEngine::Rendering::SortingCriteria sortingCriteria) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                       { "CreateDrawingSettings",
                                         {},
                                         { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::UnityEngine::Rendering::SortingCriteria>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DrawingSettings>(this, ___internal_method, shaderTagIdList, renderingData, cameraData, lightData, sortingCriteria);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderPass::op_LessThan(::UnityEngine::Rendering::Universal::ScriptableRenderPass* lhs,
                                                                                 ::UnityEngine::Rendering::Universal::ScriptableRenderPass* rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
          { "op_LessThan", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderPass::op_GreaterThan(::UnityEngine::Rendering::Universal::ScriptableRenderPass* lhs,
                                                                                    ::UnityEngine::Rendering::Universal::ScriptableRenderPass* rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
          { "op_GreaterThan", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline int32_t UnityEngine::Rendering::Universal::ScriptableRenderPass::GetRenderPassEventRange(::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(),
                                                           { "GetRenderPassEventRange", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, renderPassEvent);
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderPass* UnityEngine::Rendering::Universal::ScriptableRenderPass::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IRenderGraphRecorder"
constexpr UnityEngine::Rendering::Universal::ScriptableRenderPass::operator ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphRecorder*() noexcept {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IRenderGraphRecorder*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IRenderGraphRecorder"
constexpr ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphRecorder*
UnityEngine::Rendering::Universal::ScriptableRenderPass::i___UnityEngine__Rendering__RenderGraphModule__IRenderGraphRecorder() noexcept {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IRenderGraphRecorder*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderPass::ScriptableRenderPass() {}
