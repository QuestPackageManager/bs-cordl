#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\Internal\DrawObjectsWithRenderingLayersPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DrawObjectsPass_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingLayerUtils_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DrawObjectsWithRenderingLayersPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DrawObjectsPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DrawObjectsWithRenderingLayersPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingLayerUtils_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__URPProfileId_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderQueueRange_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__StencilState_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6903a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*&
UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData::__cordl_internal_get_basePassData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basePassData;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData* const&
UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData::__cordl_internal_get_basePassData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basePassData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData::__cordl_internal_set_basePassData(
    ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___basePassData = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize&
UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData::__cordl_internal_get_maskSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maskSize;
}
constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize const&
UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData::__cordl_internal_get_maskSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maskSize;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData::__cordl_internal_set_maskSize(
    ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maskSize = value;
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData*
UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6903b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c._Render_b__7_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c::*)(
    ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c::_Render_b__7_0)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6903b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c*>(),
                                                             { "<Render>b__7_0",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void
UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c*, "<>9",
                                    ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c*>(
      std::forward<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c* UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c*, "<>9",
                                           ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c::setStaticF___9__7_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData*,
                                                                    ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__7_0", ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData*,
                                                                    ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__7_0", ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c::_Render_b__7_0(
    ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c*>(),
                                                           { "<Render>b__7_0",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c* UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c::DrawObjectsWithRenderingLayersPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::*)(
    ::UnityEngine::Rendering::Universal::URPProfileId, bool, ::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::Rendering::RenderQueueRange, ::UnityEngine::LayerMask,
    ::UnityEngine::Rendering::StencilState, int32_t)>(&::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x69029b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::URPProfileId>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Rendering::RenderQueueRange>(),
                                                                 ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<::UnityEngine::Rendering::StencilState>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::*)(
    ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::Setup)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6902a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*>(),
            { "Setup", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass.Configure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor)>(&::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::Configure)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6902bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::Execute)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6902bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize, uint32_t)>(
    &::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::Render)> {
  constexpr static std::size_t size = 0xdd8;
  constexpr static std::size_t addrs = 0x6902ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*>(),
                                         { "Render",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*>& UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::__cordl_internal_get_m_ColorTargetIndentifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorTargetIndentifiers;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*> const& UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::__cordl_internal_get_m_ColorTargetIndentifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorTargetIndentifiers;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::__cordl_internal_set_m_ColorTargetIndentifiers(::ArrayW<::UnityEngine::Rendering::RTHandle*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColorTargetIndentifiers = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::__cordl_internal_get_m_DepthTargetIndentifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthTargetIndentifiers;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::__cordl_internal_get_m_DepthTargetIndentifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthTargetIndentifiers;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::__cordl_internal_set_m_DepthTargetIndentifiers(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepthTargetIndentifiers = value;
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::_ctor(::UnityEngine::Rendering::Universal::URPProfileId profilerTag, bool opaque,
                                                                                                   ::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                                   ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask,
                                                                                                   ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::URPProfileId>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Rendering::RenderQueueRange>(),
                                                               ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<::UnityEngine::Rendering::StencilState>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, profilerTag, opaque, evt, renderQueueRange, layerMask, stencilState, stencilReference);
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::Setup(::UnityEngine::Rendering::RTHandle* colorAttachment,
                                                                                                   ::UnityEngine::Rendering::RTHandle* renderingLayersTexture,
                                                                                                   ::UnityEngine::Rendering::RTHandle* depthAttachment) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*>(),
          { "Setup", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorAttachment, renderingLayersTexture, depthAttachment);
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::Configure(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                       ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, cameraTextureDescriptor);
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                     ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::Render(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorTarget, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle renderingLayersTexture,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthTarget, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle mainShadowsTexture,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle additionalShadowsTexture, ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize maskSize, uint32_t batchLayerMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*>(),
                                       { "Render",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData, colorTarget, renderingLayersTexture, depthTarget, mainShadowsTexture, additionalShadowsTexture,
                                                   maskSize, batchLayerMask);
}
inline ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass* UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::New_ctor(
    ::UnityEngine::Rendering::Universal::URPProfileId profilerTag, bool opaque, ::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange,
    ::UnityEngine::LayerMask layerMask, ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*>(profilerTag, opaque, evt, renderQueueRange, layerMask,
                                                                                                                                              stencilState, stencilReference));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass::DrawObjectsWithRenderingLayersPass() {}
