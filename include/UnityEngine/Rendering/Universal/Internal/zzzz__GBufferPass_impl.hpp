#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/GBufferPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__GBufferPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DeferredLights_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__GBufferPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalLightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderQueueRange_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__StencilState_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d32534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights*& UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData::__cordl_internal_get_deferredLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deferredLights;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights* const& UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData::__cordl_internal_get_deferredLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deferredLights;
}
constexpr void UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData::__cordl_internal_set_deferredLights(::UnityEngine::Rendering::Universal::Internal::DeferredLights* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___deferredLights = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData::__cordl_internal_get_rendererListHdl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererListHdl;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData::__cordl_internal_get_rendererListHdl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererListHdl;
}
constexpr void UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData::__cordl_internal_set_rendererListHdl(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rendererListHdl = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData::__cordl_internal_get_objectsWithErrorRendererListHdl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectsWithErrorRendererListHdl;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const&
UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData::__cordl_internal_get_objectsWithErrorRendererListHdl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectsWithErrorRendererListHdl;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData::__cordl_internal_set_objectsWithErrorRendererListHdl(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectsWithErrorRendererListHdl = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData::__cordl_internal_get_screenSpaceIrradianceHdl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenSpaceIrradianceHdl;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData::__cordl_internal_get_screenSpaceIrradianceHdl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenSpaceIrradianceHdl;
}
constexpr void UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData::__cordl_internal_set_screenSpaceIrradianceHdl(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___screenSpaceIrradianceHdl = value;
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData* UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData::GBufferPass_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::GBufferPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::GBufferPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::GBufferPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d3258c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::GBufferPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::GBufferPass___c._Render_b__18_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::GBufferPass___c::*)(::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData*,
                                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::Internal::GBufferPass___c::_Render_b__18_0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6d32590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::GBufferPass___c*>(),
                                                                                           { "<Render>b__18_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::Internal::GBufferPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::Internal::GBufferPass___c*, "<>9", ::UnityEngine::Rendering::Universal::Internal::GBufferPass___c*>(
      std::forward<::UnityEngine::Rendering::Universal::Internal::GBufferPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::Internal::GBufferPass___c* UnityEngine::Rendering::Universal::Internal::GBufferPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::Internal::GBufferPass___c*, "<>9", ::UnityEngine::Rendering::Universal::Internal::GBufferPass___c*>();
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass___c::setStaticF___9__18_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__18_0", ::UnityEngine::Rendering::Universal::Internal::GBufferPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::Internal::GBufferPass___c::getStaticF___9__18_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__18_0", ::UnityEngine::Rendering::Universal::Internal::GBufferPass___c*>();
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::GBufferPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass___c::_Render_b__18_0(::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData* data,
                                                                                          ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::GBufferPass___c*>(),
                                                                                         { "<Render>b__18_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::Internal::GBufferPass___c* UnityEngine::Rendering::Universal::Internal::GBufferPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::GBufferPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::GBufferPass___c::GBufferPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::GBufferPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::GBufferPass::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::Rendering::RenderQueueRange, ::UnityEngine::LayerMask, ::UnityEngine::Rendering::StencilState, int32_t,
    ::UnityEngine::Rendering::Universal::Internal::DeferredLights*)>(&::UnityEngine::Rendering::Universal::Internal::GBufferPass::_ctor)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x6d30e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Rendering::RenderQueueRange>(),
                                                                 ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<::UnityEngine::Rendering::StencilState>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::GBufferPass.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::GBufferPass::*)()>(&::UnityEngine::Rendering::Universal::Internal::GBufferPass::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6d312d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::GBufferPass.ExecutePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData*,
                                                                ::UnityEngine::Rendering::RendererList, ::UnityEngine::Rendering::RendererList)>(
    &::UnityEngine::Rendering::Universal::Internal::GBufferPass::ExecutePass)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x6d312ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>(),
                                         { "ExecutePass",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData*>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RendererList>(), ::i2c::type_of<::UnityEngine::Rendering::RendererList>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::GBufferPass.InitRendererLists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::GBufferPass::*)(
    ::by_ref<::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData*>, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*,
    ::UnityEngine::Rendering::Universal::UniversalRenderingData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::UniversalLightData*, bool, uint32_t)>(
    &::UnityEngine::Rendering::Universal::Internal::GBufferPass::InitRendererLists)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x6d31564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>(),
                            { "InitRendererLists",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData*>>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(),
                                ::i2c::type_of<bool>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::GBufferPass.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::GBufferPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, bool, uint32_t)>(&::UnityEngine::Rendering::Universal::Internal::GBufferPass::Render)> {
  constexpr static std::size_t size = 0xa8c;
  constexpr static std::size_t addrs = 0x6d318cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>(),
                                                { "Render",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights*& UnityEngine::Rendering::Universal::Internal::GBufferPass::__cordl_internal_get_m_DeferredLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeferredLights;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights* const& UnityEngine::Rendering::Universal::Internal::GBufferPass::__cordl_internal_get_m_DeferredLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeferredLights;
}
constexpr void UnityEngine::Rendering::Universal::Internal::GBufferPass::__cordl_internal_set_m_DeferredLights(::UnityEngine::Rendering::Universal::Internal::DeferredLights* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DeferredLights = value;
}
constexpr ::UnityEngine::Rendering::FilteringSettings& UnityEngine::Rendering::Universal::Internal::GBufferPass::__cordl_internal_get_m_FilteringSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr ::UnityEngine::Rendering::FilteringSettings const& UnityEngine::Rendering::Universal::Internal::GBufferPass::__cordl_internal_get_m_FilteringSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr void UnityEngine::Rendering::Universal::Internal::GBufferPass::__cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FilteringSettings = value;
}
constexpr ::UnityEngine::Rendering::RenderStateBlock& UnityEngine::Rendering::Universal::Internal::GBufferPass::__cordl_internal_get_m_RenderStateBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderStateBlock;
}
constexpr ::UnityEngine::Rendering::RenderStateBlock const& UnityEngine::Rendering::Universal::Internal::GBufferPass::__cordl_internal_get_m_RenderStateBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderStateBlock;
}
constexpr void UnityEngine::Rendering::Universal::Internal::GBufferPass::__cordl_internal_set_m_RenderStateBlock(::UnityEngine::Rendering::RenderStateBlock value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderStateBlock = value;
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass::setStaticF_s_CameraNormalsTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraNormalsTextureID", ::UnityEngine::Rendering::Universal::Internal::GBufferPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::GBufferPass::getStaticF_s_CameraNormalsTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "s_CameraNormalsTextureID", ::UnityEngine::Rendering::Universal::Internal::GBufferPass*>();
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass::setStaticF_s_CameraRenderingLayersTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraRenderingLayersTextureID", ::UnityEngine::Rendering::Universal::Internal::GBufferPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::GBufferPass::getStaticF_s_CameraRenderingLayersTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "s_CameraRenderingLayersTextureID", ::UnityEngine::Rendering::Universal::Internal::GBufferPass*>();
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass::setStaticF_s_ShaderTagLit(::UnityEngine::Rendering::ShaderTagId value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderTagId, "s_ShaderTagLit", ::UnityEngine::Rendering::Universal::Internal::GBufferPass*>(
      std::forward<::UnityEngine::Rendering::ShaderTagId>(value));
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Rendering::Universal::Internal::GBufferPass::getStaticF_s_ShaderTagLit() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderTagId, "s_ShaderTagLit", ::UnityEngine::Rendering::Universal::Internal::GBufferPass*>();
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass::setStaticF_s_ShaderTagSimpleLit(::UnityEngine::Rendering::ShaderTagId value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderTagId, "s_ShaderTagSimpleLit", ::UnityEngine::Rendering::Universal::Internal::GBufferPass*>(
      std::forward<::UnityEngine::Rendering::ShaderTagId>(value));
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Rendering::Universal::Internal::GBufferPass::getStaticF_s_ShaderTagSimpleLit() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderTagId, "s_ShaderTagSimpleLit", ::UnityEngine::Rendering::Universal::Internal::GBufferPass*>();
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass::setStaticF_s_ShaderTagUnlit(::UnityEngine::Rendering::ShaderTagId value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderTagId, "s_ShaderTagUnlit", ::UnityEngine::Rendering::Universal::Internal::GBufferPass*>(
      std::forward<::UnityEngine::Rendering::ShaderTagId>(value));
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Rendering::Universal::Internal::GBufferPass::getStaticF_s_ShaderTagUnlit() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderTagId, "s_ShaderTagUnlit", ::UnityEngine::Rendering::Universal::Internal::GBufferPass*>();
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass::setStaticF_s_ShaderTagComplexLit(::UnityEngine::Rendering::ShaderTagId value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderTagId, "s_ShaderTagComplexLit", ::UnityEngine::Rendering::Universal::Internal::GBufferPass*>(
      std::forward<::UnityEngine::Rendering::ShaderTagId>(value));
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Rendering::Universal::Internal::GBufferPass::getStaticF_s_ShaderTagComplexLit() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderTagId, "s_ShaderTagComplexLit", ::UnityEngine::Rendering::Universal::Internal::GBufferPass*>();
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass::setStaticF_s_ShaderTagUniversalGBuffer(::UnityEngine::Rendering::ShaderTagId value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderTagId, "s_ShaderTagUniversalGBuffer", ::UnityEngine::Rendering::Universal::Internal::GBufferPass*>(
      std::forward<::UnityEngine::Rendering::ShaderTagId>(value));
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Rendering::Universal::Internal::GBufferPass::getStaticF_s_ShaderTagUniversalGBuffer() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderTagId, "s_ShaderTagUniversalGBuffer", ::UnityEngine::Rendering::Universal::Internal::GBufferPass*>();
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass::setStaticF_s_ShaderTagUniversalMaterialType(::UnityEngine::Rendering::ShaderTagId value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderTagId, "s_ShaderTagUniversalMaterialType", ::UnityEngine::Rendering::Universal::Internal::GBufferPass*>(
      std::forward<::UnityEngine::Rendering::ShaderTagId>(value));
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Rendering::Universal::Internal::GBufferPass::getStaticF_s_ShaderTagUniversalMaterialType() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderTagId, "s_ShaderTagUniversalMaterialType", ::UnityEngine::Rendering::Universal::Internal::GBufferPass*>();
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass::setStaticF_s_ShaderTagValues(::ArrayW<::UnityEngine::Rendering::ShaderTagId> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::ShaderTagId>, "s_ShaderTagValues", ::UnityEngine::Rendering::Universal::Internal::GBufferPass*>(
      std::forward<::ArrayW<::UnityEngine::Rendering::ShaderTagId>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::ShaderTagId> UnityEngine::Rendering::Universal::Internal::GBufferPass::getStaticF_s_ShaderTagValues() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::ShaderTagId>, "s_ShaderTagValues", ::UnityEngine::Rendering::Universal::Internal::GBufferPass*>();
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass::setStaticF_s_RenderStateBlocks(::ArrayW<::UnityEngine::Rendering::RenderStateBlock> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::RenderStateBlock>, "s_RenderStateBlocks", ::UnityEngine::Rendering::Universal::Internal::GBufferPass*>(
      std::forward<::ArrayW<::UnityEngine::Rendering::RenderStateBlock>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::RenderStateBlock> UnityEngine::Rendering::Universal::Internal::GBufferPass::getStaticF_s_RenderStateBlocks() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::RenderStateBlock>, "s_RenderStateBlocks", ::UnityEngine::Rendering::Universal::Internal::GBufferPass*>();
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange,
                                                                            ::UnityEngine::LayerMask layerMask, ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference,
                                                                            ::UnityEngine::Rendering::Universal::Internal::DeferredLights* deferredLights) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Rendering::RenderQueueRange>(),
                                                               ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<::UnityEngine::Rendering::StencilState>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, renderQueueRange, layerMask, stencilState, stencilReference, deferredLights);
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass::ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                  ::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData* data,
                                                                                  ::UnityEngine::Rendering::RendererList rendererList, ::UnityEngine::Rendering::RendererList errorRendererList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>(),
                                       { "ExecutePass",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RendererList>(), ::i2c::type_of<::UnityEngine::Rendering::RendererList>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, data, rendererList, errorRendererList);
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass::InitRendererLists(
    ::by_ref<::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData*> passData, ::UnityEngine::Rendering::ScriptableRenderContext context,
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
    ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Rendering::Universal::UniversalLightData* lightData, bool useRenderGraph, uint32_t batchLayerMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>(),
                                       { "InitRendererLists",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData*>>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passData, context, renderGraph, renderingData, cameraData, lightData, useRenderGraph, batchLayerMask);
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                             ::UnityEngine::Rendering::ContextContainer* frameData,
                                                                             ::UnityEngine::Rendering::RenderGraphModule::TextureHandle cameraColor,
                                                                             ::UnityEngine::Rendering::RenderGraphModule::TextureHandle cameraDepth, bool setGlobalTextures, uint32_t batchLayerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>(),
                                              { "Render",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData, cameraColor, cameraDepth, setGlobalTextures, batchLayerMask);
}
inline ::UnityEngine::Rendering::Universal::Internal::GBufferPass*
UnityEngine::Rendering::Universal::Internal::GBufferPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange,
                                                                   ::UnityEngine::LayerMask layerMask, ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference,
                                                                   ::UnityEngine::Rendering::Universal::Internal::DeferredLights* deferredLights) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>(evt, renderQueueRange, layerMask, stencilState, stencilReference, deferredLights));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::GBufferPass::GBufferPass() {}
