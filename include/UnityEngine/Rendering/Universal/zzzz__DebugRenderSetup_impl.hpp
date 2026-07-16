#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugRenderSetup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugRenderSetup_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsLighting_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsMaterial_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsRendering_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugHandler_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRenderSetup.get_MaterialSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* (::UnityEngine::Rendering::Universal::DebugRenderSetup::*)()>(
    &::UnityEngine::Rendering::Universal::DebugRenderSetup::get_MaterialSettings)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x684c744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRenderSetup*>(), { "get_MaterialSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRenderSetup.get_RenderingSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* (::UnityEngine::Rendering::Universal::DebugRenderSetup::*)()>(
    &::UnityEngine::Rendering::Universal::DebugRenderSetup::get_RenderingSettings)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x684c768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRenderSetup*>(), { "get_RenderingSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRenderSetup.get_LightingSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* (::UnityEngine::Rendering::Universal::DebugRenderSetup::*)()>(
    &::UnityEngine::Rendering::Universal::DebugRenderSetup::get_LightingSettings)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x684c78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRenderSetup*>(), { "get_LightingSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRenderSetup.Begin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugRenderSetup::*)(::UnityEngine::Rendering::RasterCommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::DebugRenderSetup::Begin)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x684c5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRenderSetup*>(),
                                                                                           { "Begin", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRenderSetup.End
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugRenderSetup::*)(::UnityEngine::Rendering::RasterCommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::DebugRenderSetup::End)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x684c6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRenderSetup*>(),
                                                                                           { "End", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRenderSetup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugRenderSetup::*)(
    ::UnityEngine::Rendering::Universal::DebugHandler*, int32_t, ::UnityEngine::Rendering::FilteringSettings)>(&::UnityEngine::Rendering::Universal::DebugRenderSetup::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x684bcb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRenderSetup*>(),
            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugHandler*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::FilteringSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRenderSetup.CreateRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugRenderSetup::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::CullingResults>, ::by_ref<::UnityEngine::Rendering::DrawingSettings>,
    ::by_ref<::UnityEngine::Rendering::FilteringSettings>, ::by_ref<::UnityEngine::Rendering::RenderStateBlock>, ::by_ref<::UnityEngine::Rendering::RendererList>)>(
    &::UnityEngine::Rendering::Universal::DebugRenderSetup::CreateRendererList)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x684c7b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRenderSetup*>(),
                                                { "CreateRendererList",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::DrawingSettings>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::FilteringSettings>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderStateBlock>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRenderSetup.CreateRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugRenderSetup::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::by_ref<::UnityEngine::Rendering::CullingResults>, ::by_ref<::UnityEngine::Rendering::DrawingSettings>,
    ::by_ref<::UnityEngine::Rendering::FilteringSettings>, ::by_ref<::UnityEngine::Rendering::RenderStateBlock>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>)>(
    &::UnityEngine::Rendering::Universal::DebugRenderSetup::CreateRendererList)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x684c8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRenderSetup*>(),
                                                { "CreateRendererList",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::DrawingSettings>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::FilteringSettings>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderStateBlock>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRenderSetup.DrawWithRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugRenderSetup::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, ::by_ref<::UnityEngine::Rendering::RendererList>)>(&::UnityEngine::Rendering::Universal::DebugRenderSetup::DrawWithRendererList)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x684c618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRenderSetup*>(),
                            { "DrawWithRendererList", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRenderSetup.CreateDrawingSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DrawingSettings (::UnityEngine::Rendering::Universal::DebugRenderSetup::*)(::UnityEngine::Rendering::DrawingSettings)>(
    &::UnityEngine::Rendering::Universal::DebugRenderSetup::CreateDrawingSettings)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x684be5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRenderSetup*>(),
                                                                                           { "CreateDrawingSettings", {}, { ::i2c::type_of<::UnityEngine::Rendering::DrawingSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRenderSetup.GetRenderStateBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderStateBlock (::UnityEngine::Rendering::Universal::DebugRenderSetup::*)(
    ::UnityEngine::Rendering::RenderStateBlock)>(&::UnityEngine::Rendering::Universal::DebugRenderSetup::GetRenderStateBlock)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x684bfbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRenderSetup*>(),
                                                                                           { "GetRenderStateBlock", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderStateBlock>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRenderSetup.GetIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::DebugRenderSetup::*)()>(&::UnityEngine::Rendering::Universal::DebugRenderSetup::GetIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x684c9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRenderSetup*>(), { "GetIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRenderSetup.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugRenderSetup::*)()>(&::UnityEngine::Rendering::Universal::DebugRenderSetup::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x684be58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRenderSetup*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugHandler*& UnityEngine::Rendering::Universal::DebugRenderSetup::__cordl_internal_get_m_DebugHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugHandler;
}
constexpr ::UnityEngine::Rendering::Universal::DebugHandler* const& UnityEngine::Rendering::Universal::DebugRenderSetup::__cordl_internal_get_m_DebugHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugHandler;
}
constexpr void UnityEngine::Rendering::Universal::DebugRenderSetup::__cordl_internal_set_m_DebugHandler(::UnityEngine::Rendering::Universal::DebugHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugHandler = value;
}
constexpr ::UnityEngine::Rendering::FilteringSettings& UnityEngine::Rendering::Universal::DebugRenderSetup::__cordl_internal_get_m_FilteringSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr ::UnityEngine::Rendering::FilteringSettings const& UnityEngine::Rendering::Universal::DebugRenderSetup::__cordl_internal_get_m_FilteringSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr void UnityEngine::Rendering::Universal::DebugRenderSetup::__cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FilteringSettings = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::DebugRenderSetup::__cordl_internal_get_m_Index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::DebugRenderSetup::__cordl_internal_get_m_Index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
constexpr void UnityEngine::Rendering::Universal::DebugRenderSetup::__cordl_internal_set_m_Index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Index = value;
}
inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* UnityEngine::Rendering::Universal::DebugRenderSetup::get_MaterialSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRenderSetup*>(), { "get_MaterialSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* UnityEngine::Rendering::Universal::DebugRenderSetup::get_RenderingSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRenderSetup*>(), { "get_RenderingSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* UnityEngine::Rendering::Universal::DebugRenderSetup::get_LightingSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRenderSetup*>(), { "get_LightingSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugRenderSetup::Begin(::UnityEngine::Rendering::RasterCommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRenderSetup*>(),
                                                                                         { "Begin", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::DebugRenderSetup::End(::UnityEngine::Rendering::RasterCommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRenderSetup*>(),
                                                                                         { "End", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::DebugRenderSetup::_ctor(::UnityEngine::Rendering::Universal::DebugHandler* debugHandler, int32_t index,
                                                                       ::UnityEngine::Rendering::FilteringSettings filteringSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRenderSetup*>(),
          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugHandler*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::FilteringSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, debugHandler, index, filteringSettings);
}
inline void UnityEngine::Rendering::Universal::DebugRenderSetup::CreateRendererList(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                    ::by_ref<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                    ::by_ref<::UnityEngine::Rendering::DrawingSettings> drawingSettings,
                                                                                    ::by_ref<::UnityEngine::Rendering::FilteringSettings> filteringSettings,
                                                                                    ::by_ref<::UnityEngine::Rendering::RenderStateBlock> renderStateBlock,
                                                                                    ::by_ref<::UnityEngine::Rendering::RendererList> rendererList) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRenderSetup*>(),
                                              { "CreateRendererList",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::DrawingSettings>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::FilteringSettings>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderStateBlock>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, cullResults, drawingSettings, filteringSettings, renderStateBlock, rendererList);
}
inline void UnityEngine::Rendering::Universal::DebugRenderSetup::CreateRendererList(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                    ::by_ref<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                    ::by_ref<::UnityEngine::Rendering::DrawingSettings> drawingSettings,
                                                                                    ::by_ref<::UnityEngine::Rendering::FilteringSettings> filteringSettings,
                                                                                    ::by_ref<::UnityEngine::Rendering::RenderStateBlock> renderStateBlock,
                                                                                    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> rendererListHdl) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRenderSetup*>(),
                                              { "CreateRendererList",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::DrawingSettings>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::FilteringSettings>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderStateBlock>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, cullResults, drawingSettings, filteringSettings, renderStateBlock, rendererListHdl);
}
inline void UnityEngine::Rendering::Universal::DebugRenderSetup::DrawWithRendererList(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                      ::by_ref<::UnityEngine::Rendering::RendererList> rendererList) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRenderSetup*>(),
                          { "DrawWithRendererList", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererList>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, rendererList);
}
inline ::UnityEngine::Rendering::DrawingSettings UnityEngine::Rendering::Universal::DebugRenderSetup::CreateDrawingSettings(::UnityEngine::Rendering::DrawingSettings drawingSettings) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRenderSetup*>(),
                                                                                         { "CreateDrawingSettings", {}, { ::i2c::type_of<::UnityEngine::Rendering::DrawingSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DrawingSettings>(this, ___internal_method, drawingSettings);
}
inline ::UnityEngine::Rendering::RenderStateBlock UnityEngine::Rendering::Universal::DebugRenderSetup::GetRenderStateBlock(::UnityEngine::Rendering::RenderStateBlock renderStateBlock) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRenderSetup*>(),
                                                                                         { "GetRenderStateBlock", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderStateBlock>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderStateBlock>(this, ___internal_method, renderStateBlock);
}
inline int32_t UnityEngine::Rendering::Universal::DebugRenderSetup::GetIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRenderSetup*>(), { "GetIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugRenderSetup::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugRenderSetup*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DebugRenderSetup* UnityEngine::Rendering::Universal::DebugRenderSetup::New_ctor(::UnityEngine::Rendering::Universal::DebugHandler* debugHandler,
                                                                                                                            int32_t index,
                                                                                                                            ::UnityEngine::Rendering::FilteringSettings filteringSettings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DebugRenderSetup*>(debugHandler, index, filteringSettings));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::Universal::DebugRenderSetup::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::Universal::DebugRenderSetup::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugRenderSetup::DebugRenderSetup() {}
