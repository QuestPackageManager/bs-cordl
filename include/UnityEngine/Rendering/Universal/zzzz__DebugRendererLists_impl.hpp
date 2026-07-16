#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugRendererLists.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugRendererLists_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IRasterRenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugHandler_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugRenderSetup_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRendererLists._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugRendererLists::*)(
    ::UnityEngine::Rendering::Universal::DebugHandler*, ::UnityEngine::Rendering::FilteringSettings)>(&::UnityEngine::Rendering::Universal::DebugRendererLists::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x684a96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRendererLists*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugHandler*>(), ::i2c::type_of<::UnityEngine::Rendering::FilteringSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRendererLists.CreateDebugRenderSetups
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugRendererLists::*)(::UnityEngine::Rendering::FilteringSettings)>(
    &::UnityEngine::Rendering::Universal::DebugRendererLists::CreateDebugRenderSetups)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x684bb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRendererLists*>(),
                                                                                           { "CreateDebugRenderSetups", {}, { ::i2c::type_of<::UnityEngine::Rendering::FilteringSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRendererLists.DisposeDebugRenderLists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugRendererLists::*)()>(
    &::UnityEngine::Rendering::Universal::DebugRendererLists::DisposeDebugRenderLists)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x684bcd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRendererLists*>(), { "DisposeDebugRenderLists", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRendererLists.CreateRendererListsWithDebugRenderState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugRendererLists::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::CullingResults>, ::by_ref<::UnityEngine::Rendering::DrawingSettings>,
    ::by_ref<::UnityEngine::Rendering::FilteringSettings>, ::by_ref<::UnityEngine::Rendering::RenderStateBlock>)>(
    &::UnityEngine::Rendering::Universal::DebugRendererLists::CreateRendererListsWithDebugRenderState)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x684aa9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRendererLists*>(),
                                                { "CreateRendererListsWithDebugRenderState",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::DrawingSettings>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::FilteringSettings>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderStateBlock>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRendererLists.CreateRendererListsWithDebugRenderState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugRendererLists::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::by_ref<::UnityEngine::Rendering::CullingResults>, ::by_ref<::UnityEngine::Rendering::DrawingSettings>,
    ::by_ref<::UnityEngine::Rendering::FilteringSettings>, ::by_ref<::UnityEngine::Rendering::RenderStateBlock>)>(
    &::UnityEngine::Rendering::Universal::DebugRendererLists::CreateRendererListsWithDebugRenderState)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x684af00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRendererLists*>(),
                                                { "CreateRendererListsWithDebugRenderState",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::DrawingSettings>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::FilteringSettings>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderStateBlock>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRendererLists.PrepareRendererListForRasterPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugRendererLists::*)(::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*)>(
    &::UnityEngine::Rendering::Universal::DebugRendererLists::PrepareRendererListForRasterPass)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x684c1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRendererLists*>(),
                                                { "PrepareRendererListForRasterPass", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRendererLists.DrawWithRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugRendererLists::*)(::UnityEngine::Rendering::RasterCommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::DebugRendererLists::DrawWithRendererList)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x684c370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRendererLists*>(),
                                                                                           { "DrawWithRendererList", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugHandler*& UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_get_m_DebugHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugHandler;
}
constexpr ::UnityEngine::Rendering::Universal::DebugHandler* const& UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_get_m_DebugHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugHandler;
}
constexpr void UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_set_m_DebugHandler(::UnityEngine::Rendering::Universal::DebugHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugHandler = value;
}
constexpr ::UnityEngine::Rendering::FilteringSettings& UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_get_m_FilteringSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr ::UnityEngine::Rendering::FilteringSettings const& UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_get_m_FilteringSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr void UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FilteringSettings = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DebugRenderSetup*>*&
UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_get_m_DebugRenderSetups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugRenderSetups;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DebugRenderSetup*>* const&
UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_get_m_DebugRenderSetups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugRenderSetups;
}
constexpr void
UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_set_m_DebugRenderSetups(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DebugRenderSetup*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugRenderSetups = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererList>*& UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_get_m_ActiveDebugRendererList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveDebugRendererList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererList>* const&
UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_get_m_ActiveDebugRendererList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveDebugRendererList;
}
constexpr void
UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_set_m_ActiveDebugRendererList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererList>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActiveDebugRendererList = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*&
UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_get_m_ActiveDebugRendererListHdl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveDebugRendererListHdl;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* const&
UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_get_m_ActiveDebugRendererListHdl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveDebugRendererListHdl;
}
constexpr void UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_set_m_ActiveDebugRendererListHdl(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActiveDebugRendererListHdl = value;
}
inline void UnityEngine::Rendering::Universal::DebugRendererLists::_ctor(::UnityEngine::Rendering::Universal::DebugHandler* debugHandler,
                                                                         ::UnityEngine::Rendering::FilteringSettings filteringSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRendererLists*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugHandler*>(), ::i2c::type_of<::UnityEngine::Rendering::FilteringSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, debugHandler, filteringSettings);
}
inline void UnityEngine::Rendering::Universal::DebugRendererLists::CreateDebugRenderSetups(::UnityEngine::Rendering::FilteringSettings filteringSettings) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRendererLists*>(),
                                                                                         { "CreateDebugRenderSetups", {}, { ::i2c::type_of<::UnityEngine::Rendering::FilteringSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filteringSettings);
}
inline void UnityEngine::Rendering::Universal::DebugRendererLists::DisposeDebugRenderLists() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRendererLists*>(), { "DisposeDebugRenderLists", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugRendererLists::CreateRendererListsWithDebugRenderState(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                           ::by_ref<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                                           ::by_ref<::UnityEngine::Rendering::DrawingSettings> drawingSettings,
                                                                                                           ::by_ref<::UnityEngine::Rendering::FilteringSettings> filteringSettings,
                                                                                                           ::by_ref<::UnityEngine::Rendering::RenderStateBlock> renderStateBlock) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRendererLists*>(),
                                              { "CreateRendererListsWithDebugRenderState",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::DrawingSettings>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::FilteringSettings>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderStateBlock>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, cullResults, drawingSettings, filteringSettings, renderStateBlock);
}
inline void UnityEngine::Rendering::Universal::DebugRendererLists::CreateRendererListsWithDebugRenderState(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                           ::by_ref<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                                           ::by_ref<::UnityEngine::Rendering::DrawingSettings> drawingSettings,
                                                                                                           ::by_ref<::UnityEngine::Rendering::FilteringSettings> filteringSettings,
                                                                                                           ::by_ref<::UnityEngine::Rendering::RenderStateBlock> renderStateBlock) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRendererLists*>(),
                                              { "CreateRendererListsWithDebugRenderState",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::DrawingSettings>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::FilteringSettings>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderStateBlock>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, cullResults, drawingSettings, filteringSettings, renderStateBlock);
}
inline void UnityEngine::Rendering::Universal::DebugRendererLists::PrepareRendererListForRasterPass(::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder* builder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRendererLists*>(),
                                                           { "PrepareRendererListForRasterPass", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, builder);
}
inline void UnityEngine::Rendering::Universal::DebugRendererLists::DrawWithRendererList(::UnityEngine::Rendering::RasterCommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRendererLists*>(),
                                                                                         { "DrawWithRendererList", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline ::UnityEngine::Rendering::Universal::DebugRendererLists* UnityEngine::Rendering::Universal::DebugRendererLists::New_ctor(::UnityEngine::Rendering::Universal::DebugHandler* debugHandler,
                                                                                                                                ::UnityEngine::Rendering::FilteringSettings filteringSettings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DebugRendererLists*>(debugHandler, filteringSettings));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugRendererLists::DebugRendererLists() {}
