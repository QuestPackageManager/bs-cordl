#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\Internal\DrawObjectsPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DrawObjectsPass_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DrawObjectsPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugRendererLists_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__URPProfileId_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalLightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderQueueRange_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "UnityEngine/Rendering/zzzz__StencilState_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69010c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_get_albedoHdl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___albedoHdl;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_get_albedoHdl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___albedoHdl;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_set_albedoHdl(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___albedoHdl = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_get_depthHdl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthHdl;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_get_depthHdl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthHdl;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_set_depthHdl(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depthHdl = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_get_cameraData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_get_cameraData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraData = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_get_isOpaque() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isOpaque;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_get_isOpaque() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isOpaque;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_set_isOpaque(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isOpaque = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_get_shouldTransparentsReceiveShadows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldTransparentsReceiveShadows;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_get_shouldTransparentsReceiveShadows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldTransparentsReceiveShadows;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_set_shouldTransparentsReceiveShadows(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shouldTransparentsReceiveShadows = value;
}
constexpr uint32_t& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_get_batchLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___batchLayerMask;
}
constexpr uint32_t const& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_get_batchLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___batchLayerMask;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_set_batchLayerMask(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___batchLayerMask = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_get_isActiveTargetBackBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActiveTargetBackBuffer;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_get_isActiveTargetBackBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActiveTargetBackBuffer;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_set_isActiveTargetBackBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isActiveTargetBackBuffer = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_get_rendererListHdl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererListHdl;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_get_rendererListHdl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererListHdl;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_set_rendererListHdl(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rendererListHdl = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle&
UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_get_objectsWithErrorRendererListHdl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectsWithErrorRendererListHdl;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const&
UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_get_objectsWithErrorRendererListHdl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectsWithErrorRendererListHdl;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_set_objectsWithErrorRendererListHdl(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectsWithErrorRendererListHdl = value;
}
constexpr ::UnityEngine::Rendering::Universal::DebugRendererLists*& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_get_debugRendererLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugRendererLists;
}
constexpr ::UnityEngine::Rendering::Universal::DebugRendererLists* const& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_get_debugRendererLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugRendererLists;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_set_debugRendererLists(::UnityEngine::Rendering::Universal::DebugRendererLists* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debugRendererLists = value;
}
constexpr ::UnityEngine::Rendering::RendererList& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_get_rendererList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererList;
}
constexpr ::UnityEngine::Rendering::RendererList const& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_get_rendererList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererList;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_set_rendererList(::UnityEngine::Rendering::RendererList value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rendererList = value;
}
constexpr ::UnityEngine::Rendering::RendererList& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_get_objectsWithErrorRendererList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectsWithErrorRendererList;
}
constexpr ::UnityEngine::Rendering::RendererList const& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_get_objectsWithErrorRendererList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectsWithErrorRendererList;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::__cordl_internal_set_objectsWithErrorRendererList(::UnityEngine::Rendering::RendererList value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectsWithErrorRendererList = value;
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData* UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData::DrawObjectsPass_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6902870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c._Render_b__17_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c::*)(
    ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c::_Render_b__17_0)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6902874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c*>(),
                                                                                           { "<Render>b__17_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c*, "<>9", ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c*>(
      std::forward<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c* UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c*, "<>9", ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c::setStaticF___9__17_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__17_0", ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c::getStaticF___9__17_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__17_0", ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c::_Render_b__17_0(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData* data,
                                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c*>(),
                                                                                         { "<Render>b__17_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c* UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c::DrawObjectsPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::*)(
    ::StringW, ::ArrayW<::UnityEngine::Rendering::ShaderTagId>, bool, ::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::Rendering::RenderQueueRange, ::UnityEngine::LayerMask,
    ::UnityEngine::Rendering::StencilState, int32_t)>(&::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6900b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::ShaderTagId>>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Rendering::RenderQueueRange>(),
                                                                 ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<::UnityEngine::Rendering::StencilState>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::*)(
    ::StringW, bool, ::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::Rendering::RenderQueueRange, ::UnityEngine::LayerMask, ::UnityEngine::Rendering::StencilState, int32_t)>(
    &::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6900f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderQueueRange>(), ::i2c::type_of<::UnityEngine::LayerMask>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::StencilState>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::*)(
    ::UnityEngine::Rendering::Universal::URPProfileId, bool, ::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::Rendering::RenderQueueRange, ::UnityEngine::LayerMask,
    ::UnityEngine::Rendering::StencilState, int32_t)>(&::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6900f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::URPProfileId>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Rendering::RenderQueueRange>(),
                                                                 ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<::UnityEngine::Rendering::StencilState>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::*)(
    bool, ::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::Rendering::RenderQueueRange, ::UnityEngine::LayerMask, ::UnityEngine::Rendering::StencilState, int32_t,
    ::ArrayW<::UnityEngine::Rendering::ShaderTagId>)>(&::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::Init)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x6900c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*>(),
                                                                                           { "Init",
                                                                                             {},
                                                                                             { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderQueueRange>(), ::i2c::type_of<::UnityEngine::LayerMask>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::StencilState>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::ShaderTagId>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::Execute)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x69010c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass.ExecutePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*,
                                                                ::UnityEngine::Rendering::RendererList, ::UnityEngine::Rendering::RendererList, bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::ExecutePass)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x6901698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*>(),
                            { "ExecutePass",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::RendererList>(), ::i2c::type_of<::UnityEngine::Rendering::RendererList>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass.InitPassData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::*)(
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::by_ref<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*>, uint32_t, bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::InitPassData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x69012fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*>(),
                                                                                           { "InitPassData",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*>>(),
                                                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass.InitRendererLists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::*)(
    ::UnityEngine::Rendering::Universal::UniversalRenderingData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::UniversalLightData*,
    ::by_ref<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*>, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*,
    bool)>(&::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::InitRendererLists)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x690133c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*>(),
            { "InitRendererLists",
              {},
              { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*>>(),
                ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, uint32_t)>(
    &::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::Render)> {
  constexpr static std::size_t size = 0xea0;
  constexpr static std::size_t addrs = 0x690190c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*>(),
                                         { "Render",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                             ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::FilteringSettings& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::__cordl_internal_get_m_FilteringSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr ::UnityEngine::Rendering::FilteringSettings const& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::__cordl_internal_get_m_FilteringSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::__cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FilteringSettings = value;
}
constexpr ::UnityEngine::Rendering::RenderStateBlock& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::__cordl_internal_get_m_RenderStateBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderStateBlock;
}
constexpr ::UnityEngine::Rendering::RenderStateBlock const& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::__cordl_internal_get_m_RenderStateBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderStateBlock;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::__cordl_internal_set_m_RenderStateBlock(::UnityEngine::Rendering::RenderStateBlock value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderStateBlock = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::__cordl_internal_get_m_ShaderTagIdList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderTagIdList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* const&
UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::__cordl_internal_get_m_ShaderTagIdList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderTagIdList;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::__cordl_internal_set_m_ShaderTagIdList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShaderTagIdList = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::__cordl_internal_get_m_IsOpaque() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsOpaque;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::__cordl_internal_get_m_IsOpaque() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsOpaque;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::__cordl_internal_set_m_IsOpaque(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsOpaque = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::__cordl_internal_get_m_IsActiveTargetBackBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsActiveTargetBackBuffer;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::__cordl_internal_get_m_IsActiveTargetBackBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsActiveTargetBackBuffer;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::__cordl_internal_set_m_IsActiveTargetBackBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsActiveTargetBackBuffer = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::__cordl_internal_get_m_ShouldTransparentsReceiveShadows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldTransparentsReceiveShadows;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::__cordl_internal_get_m_ShouldTransparentsReceiveShadows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldTransparentsReceiveShadows;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::__cordl_internal_set_m_ShouldTransparentsReceiveShadows(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShouldTransparentsReceiveShadows = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::__cordl_internal_get_m_PassData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData* const& UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::__cordl_internal_get_m_PassData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::__cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PassData = value;
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::setStaticF_s_DrawObjectPassDataPropID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_DrawObjectPassDataPropID", ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::getStaticF_s_DrawObjectPassDataPropID() {
  return ::cordl_internals::getStaticField<int32_t, "s_DrawObjectPassDataPropID", ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::_ctor(::StringW profilerTag, ::ArrayW<::UnityEngine::Rendering::ShaderTagId> shaderTagIds, bool opaque,
                                                                                ::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange,
                                                                                ::UnityEngine::LayerMask layerMask, ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::ShaderTagId>>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Rendering::RenderQueueRange>(),
                                                               ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<::UnityEngine::Rendering::StencilState>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, profilerTag, shaderTagIds, opaque, evt, renderQueueRange, layerMask, stencilState, stencilReference);
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::_ctor(::StringW profilerTag, bool opaque, ::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask,
                                                                                ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderQueueRange>(), ::i2c::type_of<::UnityEngine::LayerMask>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::StencilState>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, profilerTag, opaque, evt, renderQueueRange, layerMask, stencilState, stencilReference);
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::_ctor(::UnityEngine::Rendering::Universal::URPProfileId profileId, bool opaque,
                                                                                ::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange,
                                                                                ::UnityEngine::LayerMask layerMask, ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::URPProfileId>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Rendering::RenderQueueRange>(),
                                                               ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<::UnityEngine::Rendering::StencilState>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, profileId, opaque, evt, renderQueueRange, layerMask, stencilState, stencilReference);
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::Init(bool opaque, ::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                               ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask,
                                                                               ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference,
                                                                               ::ArrayW<::UnityEngine::Rendering::ShaderTagId> shaderTagIds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*>(),
                                       { "Init",
                                         {},
                                         { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Rendering::RenderQueueRange>(),
                                           ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<::UnityEngine::Rendering::StencilState>(), ::i2c::type_of<int32_t>(),
                                           ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::ShaderTagId>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, opaque, evt, renderQueueRange, layerMask, stencilState, stencilReference, shaderTagIds);
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                  ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                      ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData* data,
                                                                                      ::UnityEngine::Rendering::RendererList rendererList,
                                                                                      ::UnityEngine::Rendering::RendererList objectsWithErrorRendererList, bool yFlip) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*>(),
                                       { "ExecutePass",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RendererList>(), ::i2c::type_of<::UnityEngine::Rendering::RendererList>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, data, rendererList, objectsWithErrorRendererList, yFlip);
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::InitPassData(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                       ::by_ref<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*> passData,
                                                                                       uint32_t batchLayerMask, bool isActiveTargetBackBuffer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*>(),
                                                                                         { "InitPassData",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*>>(),
                                                                                             ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData, passData, batchLayerMask, isActiveTargetBackBuffer);
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::InitRendererLists(::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                                                                            ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                            ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                                                                            ::by_ref<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*> passData,
                                                                                            ::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                            ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, bool useRenderGraph) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*>(),
          { "InitRendererLists",
            {},
            { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
              ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*>>(),
              ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderingData, cameraData, lightData, passData, context, renderGraph, useRenderGraph);
}
inline void UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                 ::UnityEngine::Rendering::ContextContainer* frameData,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorTarget,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthTarget,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle mainShadowsTexture,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle additionalShadowsTexture, uint32_t batchLayerMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*>(),
                                       { "Render",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                           ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData, colorTarget, depthTarget, mainShadowsTexture, additionalShadowsTexture, batchLayerMask);
}
inline ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*
UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::New_ctor(::StringW profilerTag, ::ArrayW<::UnityEngine::Rendering::ShaderTagId> shaderTagIds, bool opaque,
                                                                       ::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange,
                                                                       ::UnityEngine::LayerMask layerMask, ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*>(profilerTag, shaderTagIds, opaque, evt, renderQueueRange, layerMask,
                                                                                                                           stencilState, stencilReference));
}
inline ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*
UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::New_ctor(::StringW profilerTag, bool opaque, ::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                       ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask,
                                                                       ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*>(profilerTag, opaque, evt, renderQueueRange, layerMask, stencilState, stencilReference));
}
inline ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*
UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::New_ctor(::UnityEngine::Rendering::Universal::URPProfileId profileId, bool opaque,
                                                                       ::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange,
                                                                       ::UnityEngine::LayerMask layerMask, ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*>(profileId, opaque, evt, renderQueueRange, layerMask, stencilState, stencilReference));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass::DrawObjectsPass() {}
