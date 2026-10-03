#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DBufferRenderPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DBufferRenderPass_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DBufferRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DBufferSettings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawDBufferSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalLightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererListParams_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c8e578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem*& UnityEngine::Rendering::Universal::DBufferRenderPass_PassData::__cordl_internal_get_drawSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawSystem;
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* const& UnityEngine::Rendering::Universal::DBufferRenderPass_PassData::__cordl_internal_get_drawSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawSystem;
}
constexpr void UnityEngine::Rendering::Universal::DBufferRenderPass_PassData::__cordl_internal_set_drawSystem(::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___drawSystem = value;
}
constexpr ::UnityEngine::Rendering::Universal::DBufferSettings*& UnityEngine::Rendering::Universal::DBufferRenderPass_PassData::__cordl_internal_get_settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr ::UnityEngine::Rendering::Universal::DBufferSettings* const& UnityEngine::Rendering::Universal::DBufferRenderPass_PassData::__cordl_internal_get_settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr void UnityEngine::Rendering::Universal::DBufferRenderPass_PassData::__cordl_internal_set_settings(::UnityEngine::Rendering::Universal::DBufferSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___settings = value;
}
constexpr bool& UnityEngine::Rendering::Universal::DBufferRenderPass_PassData::__cordl_internal_get_decalLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decalLayers;
}
constexpr bool const& UnityEngine::Rendering::Universal::DBufferRenderPass_PassData::__cordl_internal_get_decalLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decalLayers;
}
constexpr void UnityEngine::Rendering::Universal::DBufferRenderPass_PassData::__cordl_internal_set_decalLayers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decalLayers = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::DBufferRenderPass_PassData::__cordl_internal_get_dBufferDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dBufferDepth;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::DBufferRenderPass_PassData::__cordl_internal_get_dBufferDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dBufferDepth;
}
constexpr void UnityEngine::Rendering::Universal::DBufferRenderPass_PassData::__cordl_internal_set_dBufferDepth(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dBufferDepth = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*>& UnityEngine::Rendering::Universal::DBufferRenderPass_PassData::__cordl_internal_get_dBufferColorHandles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dBufferColorHandles;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*> const& UnityEngine::Rendering::Universal::DBufferRenderPass_PassData::__cordl_internal_get_dBufferColorHandles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dBufferColorHandles;
}
constexpr void UnityEngine::Rendering::Universal::DBufferRenderPass_PassData::__cordl_internal_set_dBufferColorHandles(::ArrayW<::UnityEngine::Rendering::RTHandle*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dBufferColorHandles = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& UnityEngine::Rendering::Universal::DBufferRenderPass_PassData::__cordl_internal_get_rendererList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererList;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& UnityEngine::Rendering::Universal::DBufferRenderPass_PassData::__cordl_internal_get_rendererList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererList;
}
constexpr void UnityEngine::Rendering::Universal::DBufferRenderPass_PassData::__cordl_internal_set_rendererList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rendererList = value;
}
inline void UnityEngine::Rendering::Universal::DBufferRenderPass_PassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData* UnityEngine::Rendering::Universal::DBufferRenderPass_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData::DBufferRenderPass_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DBufferRenderPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DBufferRenderPass___c::*)()>(&::UnityEngine::Rendering::Universal::DBufferRenderPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c8e5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferRenderPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DBufferRenderPass___c._RecordRenderGraph_b__15_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DBufferRenderPass___c::*)(::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData*,
                                                                                                                            ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::DBufferRenderPass___c::_RecordRenderGraph_b__15_0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6c8e5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferRenderPass___c*>(),
                                                                                           { "<RecordRenderGraph>b__15_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::DBufferRenderPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::DBufferRenderPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::DBufferRenderPass___c*, "<>9", ::UnityEngine::Rendering::Universal::DBufferRenderPass___c*>(
      std::forward<::UnityEngine::Rendering::Universal::DBufferRenderPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::DBufferRenderPass___c* UnityEngine::Rendering::Universal::DBufferRenderPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::DBufferRenderPass___c*, "<>9", ::UnityEngine::Rendering::Universal::DBufferRenderPass___c*>();
}
inline void UnityEngine::Rendering::Universal::DBufferRenderPass___c::setStaticF___9__15_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
        value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__15_0", ::UnityEngine::Rendering::Universal::DBufferRenderPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::DBufferRenderPass___c::getStaticF___9__15_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__15_0", ::UnityEngine::Rendering::Universal::DBufferRenderPass___c*>();
}
inline void UnityEngine::Rendering::Universal::DBufferRenderPass___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferRenderPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DBufferRenderPass___c::_RecordRenderGraph_b__15_0(::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData* data,
                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext rgContext) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferRenderPass___c*>(),
                                                                                         { "<RecordRenderGraph>b__15_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, rgContext);
}
inline ::UnityEngine::Rendering::Universal::DBufferRenderPass___c* UnityEngine::Rendering::Universal::DBufferRenderPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DBufferRenderPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DBufferRenderPass___c::DBufferRenderPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DBufferRenderPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DBufferRenderPass::*)(::UnityEngine::Material*, ::UnityEngine::Rendering::Universal::DBufferSettings*,
                                                                                                                        ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem*, bool)>(
    &::UnityEngine::Rendering::Universal::DBufferRenderPass::_ctor)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x6c8c36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferRenderPass*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DBufferSettings*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DBufferRenderPass.ExecutePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData*,
                                                                ::UnityEngine::Rendering::RendererList, bool)>(&::UnityEngine::Rendering::Universal::DBufferRenderPass::ExecutePass)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6c8c700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferRenderPass*>(),
                                         { "ExecutePass",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData*>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RendererList>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DBufferRenderPass.SetKeywords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData*)>(
    &::UnityEngine::Rendering::Universal::DBufferRenderPass::SetKeywords)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6c8c934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferRenderPass*>(),
            { "SetKeywords", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DBufferRenderPass.InitPassData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DBufferRenderPass::*)(::by_ref<::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData*>)>(
    &::UnityEngine::Rendering::Universal::DBufferRenderPass::InitPassData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6c8ca2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferRenderPass*>(),
                                                             { "InitPassData", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DBufferRenderPass.InitRendererListParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RendererListParams (::UnityEngine::Rendering::Universal::DBufferRenderPass::*)(
    ::UnityEngine::Rendering::Universal::UniversalRenderingData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::UniversalLightData*)>(
    &::UnityEngine::Rendering::Universal::DBufferRenderPass::InitRendererListParams)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6c8ca6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferRenderPass*>(),
                                                                                           { "InitRendererListParams",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DBufferRenderPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DBufferRenderPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::UnityEngine::Rendering::Universal::DBufferRenderPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x1774;
  constexpr static std::size_t addrs = 0x6c8cb9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferRenderPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferRenderPass*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DBufferRenderPass.OnCameraCleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DBufferRenderPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::DBufferRenderPass::OnCameraCleanup)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6c8e318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferRenderPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferRenderPass*>(), 10 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem*& UnityEngine::Rendering::Universal::DBufferRenderPass::__cordl_internal_get_m_DrawSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawSystem;
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* const& UnityEngine::Rendering::Universal::DBufferRenderPass::__cordl_internal_get_m_DrawSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawSystem;
}
constexpr void UnityEngine::Rendering::Universal::DBufferRenderPass::__cordl_internal_set_m_DrawSystem(::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DrawSystem = value;
}
constexpr ::UnityEngine::Rendering::Universal::DBufferSettings*& UnityEngine::Rendering::Universal::DBufferRenderPass::__cordl_internal_get_m_Settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr ::UnityEngine::Rendering::Universal::DBufferSettings* const& UnityEngine::Rendering::Universal::DBufferRenderPass::__cordl_internal_get_m_Settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr void UnityEngine::Rendering::Universal::DBufferRenderPass::__cordl_internal_set_m_Settings(::UnityEngine::Rendering::Universal::DBufferSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Settings = value;
}
constexpr ::UnityEngine::Rendering::FilteringSettings& UnityEngine::Rendering::Universal::DBufferRenderPass::__cordl_internal_get_m_FilteringSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr ::UnityEngine::Rendering::FilteringSettings const& UnityEngine::Rendering::Universal::DBufferRenderPass::__cordl_internal_get_m_FilteringSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr void UnityEngine::Rendering::Universal::DBufferRenderPass::__cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FilteringSettings = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*& UnityEngine::Rendering::Universal::DBufferRenderPass::__cordl_internal_get_m_ShaderTagIdList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderTagIdList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* const& UnityEngine::Rendering::Universal::DBufferRenderPass::__cordl_internal_get_m_ShaderTagIdList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderTagIdList;
}
constexpr void UnityEngine::Rendering::Universal::DBufferRenderPass::__cordl_internal_set_m_ShaderTagIdList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShaderTagIdList = value;
}
constexpr bool& UnityEngine::Rendering::Universal::DBufferRenderPass::__cordl_internal_get_m_DecalLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalLayers;
}
constexpr bool const& UnityEngine::Rendering::Universal::DBufferRenderPass::__cordl_internal_get_m_DecalLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalLayers;
}
constexpr void UnityEngine::Rendering::Universal::DBufferRenderPass::__cordl_internal_set_m_DecalLayers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DecalLayers = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>& UnityEngine::Rendering::Universal::DBufferRenderPass::__cordl_internal_get_dbufferHandles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dbufferHandles;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const& UnityEngine::Rendering::Universal::DBufferRenderPass::__cordl_internal_get_dbufferHandles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dbufferHandles;
}
constexpr void UnityEngine::Rendering::Universal::DBufferRenderPass::__cordl_internal_set_dbufferHandles(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dbufferHandles = value;
}
inline void UnityEngine::Rendering::Universal::DBufferRenderPass::setStaticF_s_DBufferNames(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_DBufferNames", ::UnityEngine::Rendering::Universal::DBufferRenderPass*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> UnityEngine::Rendering::Universal::DBufferRenderPass::getStaticF_s_DBufferNames() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_DBufferNames", ::UnityEngine::Rendering::Universal::DBufferRenderPass*>();
}
inline void UnityEngine::Rendering::Universal::DBufferRenderPass::setStaticF_s_DBufferDepthName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_DBufferDepthName", ::UnityEngine::Rendering::Universal::DBufferRenderPass*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::Universal::DBufferRenderPass::getStaticF_s_DBufferDepthName() {
  return ::cordl_internals::getStaticField<::StringW, "s_DBufferDepthName", ::UnityEngine::Rendering::Universal::DBufferRenderPass*>();
}
inline void UnityEngine::Rendering::Universal::DBufferRenderPass::setStaticF_s_SSAOTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_SSAOTextureID", ::UnityEngine::Rendering::Universal::DBufferRenderPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DBufferRenderPass::getStaticF_s_SSAOTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "s_SSAOTextureID", ::UnityEngine::Rendering::Universal::DBufferRenderPass*>();
}
inline void UnityEngine::Rendering::Universal::DBufferRenderPass::_ctor(::UnityEngine::Material* dBufferClear, ::UnityEngine::Rendering::Universal::DBufferSettings* settings,
                                                                        ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* drawSystem, bool decalLayers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferRenderPass*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DBufferSettings*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dBufferClear, settings, drawSystem, decalLayers);
}
inline void UnityEngine::Rendering::Universal::DBufferRenderPass::ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                              ::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData* passData,
                                                                              ::UnityEngine::Rendering::RendererList rendererList, bool renderGraph) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferRenderPass*>(),
                                              { "ExecutePass",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::RendererList>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, passData, rendererList, renderGraph);
}
inline void UnityEngine::Rendering::Universal::DBufferRenderPass::SetKeywords(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                              ::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData* passData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferRenderPass*>(),
          { "SetKeywords", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, passData);
}
inline void UnityEngine::Rendering::Universal::DBufferRenderPass::InitPassData(::by_ref<::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData*> passData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferRenderPass*>(),
                                                           { "InitPassData", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passData);
}
inline ::UnityEngine::Rendering::RendererListParams
UnityEngine::Rendering::Universal::DBufferRenderPass::InitRendererListParams(::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                                                             ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                             ::UnityEngine::Rendering::Universal::UniversalLightData* lightData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferRenderPass*>(),
                                       { "InitRendererListParams",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererListParams>(this, ___internal_method, renderingData, cameraData, lightData);
}
inline void UnityEngine::Rendering::Universal::DBufferRenderPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                    ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferRenderPass*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline void UnityEngine::Rendering::Universal::DBufferRenderPass::OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferRenderPass*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline ::UnityEngine::Rendering::Universal::DBufferRenderPass* UnityEngine::Rendering::Universal::DBufferRenderPass::New_ctor(::UnityEngine::Material* dBufferClear,
                                                                                                                              ::UnityEngine::Rendering::Universal::DBufferSettings* settings,
                                                                                                                              ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* drawSystem,
                                                                                                                              bool decalLayers) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DBufferRenderPass*>(dBufferClear, settings, drawSystem, decalLayers));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DBufferRenderPass::DBufferRenderPass() {}
