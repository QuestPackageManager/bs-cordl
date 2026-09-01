#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\DecalGBufferRenderPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalGBufferRenderPass_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DeferredLights_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawGBufferSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalGBufferRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalScreenSpaceSettings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6860d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem*& UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData::__cordl_internal_get_drawSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawSystem;
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* const& UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData::__cordl_internal_get_drawSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawSystem;
}
constexpr void UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData::__cordl_internal_set_drawSystem(::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___drawSystem = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*& UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData::__cordl_internal_get_settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* const& UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData::__cordl_internal_get_settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr void UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData::__cordl_internal_set_settings(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___settings = value;
}
constexpr bool& UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData::__cordl_internal_get_decalLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decalLayers;
}
constexpr bool const& UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData::__cordl_internal_get_decalLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decalLayers;
}
constexpr void UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData::__cordl_internal_set_decalLayers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decalLayers = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData::__cordl_internal_get_cameraData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData::__cordl_internal_get_cameraData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr void UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraData = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData::__cordl_internal_get_rendererList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererList;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData::__cordl_internal_get_rendererList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererList;
}
constexpr void UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData::__cordl_internal_set_rendererList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rendererList = value;
}
inline void UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData* UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData::DecalGBufferRenderPass_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68625e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c._RecordRenderGraph_b__15_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c::*)(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData*,
                                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c::_RecordRenderGraph_b__15_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x68625e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c*>(),
                                                                                           { "<RecordRenderGraph>b__15_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c*, "<>9", ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c*>(
      std::forward<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c* UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c*, "<>9", ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c*>();
}
inline void UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c::setStaticF___9__15_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__15_0", ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c::getStaticF___9__15_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__15_0", ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c*>();
}
inline void UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c::_RecordRenderGraph_b__15_0(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData* data,
                                                                                                      ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext rgContext) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c*>(),
                                                                                         { "<RecordRenderGraph>b__15_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, rgContext);
}
inline ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c* UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c::DecalGBufferRenderPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalGBufferRenderPass::*)(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*,
                                                                                                                             ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem*, bool)>(
    &::UnityEngine::Rendering::Universal::DecalGBufferRenderPass::_ctor)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x6860abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalGBufferRenderPass::*)(::UnityEngine::Rendering::Universal::Internal::DeferredLights*)>(
    &::UnityEngine::Rendering::Universal::DecalGBufferRenderPass::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6860d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass*>(),
                                                                                           { "Setup", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass.Configure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalGBufferRenderPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor)>(&::UnityEngine::Rendering::Universal::DecalGBufferRenderPass::Configure)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x6860da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalGBufferRenderPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::DecalGBufferRenderPass::Execute)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x6861218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass.InitPassData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalGBufferRenderPass::*)(
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::by_ref<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData*>)>(
    &::UnityEngine::Rendering::Universal::DecalGBufferRenderPass::InitPassData)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6861548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass*>(),
                                                                                           { "InitPassData",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass.ExecutePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData*,
                                                                ::UnityEngine::Rendering::RendererList)>(&::UnityEngine::Rendering::Universal::DecalGBufferRenderPass::ExecutePass)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x686158c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass*>(),
                                         { "ExecutePass",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData*>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RendererList>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalGBufferRenderPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::UnityEngine::Rendering::Universal::DecalGBufferRenderPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0xda8;
  constexpr static std::size_t addrs = 0x68616fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass.OnCameraCleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalGBufferRenderPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::DecalGBufferRenderPass::OnCameraCleanup)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x68624a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass*>(), 8 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::FilteringSettings& UnityEngine::Rendering::Universal::DecalGBufferRenderPass::__cordl_internal_get_m_FilteringSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr ::UnityEngine::Rendering::FilteringSettings const& UnityEngine::Rendering::Universal::DecalGBufferRenderPass::__cordl_internal_get_m_FilteringSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr void UnityEngine::Rendering::Universal::DecalGBufferRenderPass::__cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FilteringSettings = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*& UnityEngine::Rendering::Universal::DecalGBufferRenderPass::__cordl_internal_get_m_ShaderTagIdList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderTagIdList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* const&
UnityEngine::Rendering::Universal::DecalGBufferRenderPass::__cordl_internal_get_m_ShaderTagIdList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderTagIdList;
}
constexpr void UnityEngine::Rendering::Universal::DecalGBufferRenderPass::__cordl_internal_set_m_ShaderTagIdList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShaderTagIdList = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem*& UnityEngine::Rendering::Universal::DecalGBufferRenderPass::__cordl_internal_get_m_DrawSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawSystem;
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* const& UnityEngine::Rendering::Universal::DecalGBufferRenderPass::__cordl_internal_get_m_DrawSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawSystem;
}
constexpr void UnityEngine::Rendering::Universal::DecalGBufferRenderPass::__cordl_internal_set_m_DrawSystem(::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DrawSystem = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*& UnityEngine::Rendering::Universal::DecalGBufferRenderPass::__cordl_internal_get_m_Settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* const& UnityEngine::Rendering::Universal::DecalGBufferRenderPass::__cordl_internal_get_m_Settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr void UnityEngine::Rendering::Universal::DecalGBufferRenderPass::__cordl_internal_set_m_Settings(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Settings = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights*& UnityEngine::Rendering::Universal::DecalGBufferRenderPass::__cordl_internal_get_m_DeferredLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeferredLights;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights* const& UnityEngine::Rendering::Universal::DecalGBufferRenderPass::__cordl_internal_get_m_DeferredLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeferredLights;
}
constexpr void UnityEngine::Rendering::Universal::DecalGBufferRenderPass::__cordl_internal_set_m_DeferredLights(::UnityEngine::Rendering::Universal::Internal::DeferredLights* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DeferredLights = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*>& UnityEngine::Rendering::Universal::DecalGBufferRenderPass::__cordl_internal_get_m_GbufferAttachments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GbufferAttachments;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*> const& UnityEngine::Rendering::Universal::DecalGBufferRenderPass::__cordl_internal_get_m_GbufferAttachments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GbufferAttachments;
}
constexpr void UnityEngine::Rendering::Universal::DecalGBufferRenderPass::__cordl_internal_set_m_GbufferAttachments(::ArrayW<::UnityEngine::Rendering::RTHandle*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GbufferAttachments = value;
}
constexpr bool& UnityEngine::Rendering::Universal::DecalGBufferRenderPass::__cordl_internal_get_m_DecalLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalLayers;
}
constexpr bool const& UnityEngine::Rendering::Universal::DecalGBufferRenderPass::__cordl_internal_get_m_DecalLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalLayers;
}
constexpr void UnityEngine::Rendering::Universal::DecalGBufferRenderPass::__cordl_internal_set_m_DecalLayers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DecalLayers = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData*& UnityEngine::Rendering::Universal::DecalGBufferRenderPass::__cordl_internal_get_m_PassData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData* const& UnityEngine::Rendering::Universal::DecalGBufferRenderPass::__cordl_internal_get_m_PassData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr void UnityEngine::Rendering::Universal::DecalGBufferRenderPass::__cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PassData = value;
}
inline void UnityEngine::Rendering::Universal::DecalGBufferRenderPass::_ctor(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* settings,
                                                                             ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* drawSystem, bool decalLayers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings, drawSystem, decalLayers);
}
inline void UnityEngine::Rendering::Universal::DecalGBufferRenderPass::Setup(::UnityEngine::Rendering::Universal::Internal::DeferredLights* deferredLights) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass*>(),
                                                                                         { "Setup", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deferredLights);
}
inline void UnityEngine::Rendering::Universal::DecalGBufferRenderPass::Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, cameraTextureDescriptor);
}
inline void UnityEngine::Rendering::Universal::DecalGBufferRenderPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                               ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::DecalGBufferRenderPass::InitPassData(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                    ::by_ref<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData*> passData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass*>(),
                                                                                         { "InitPassData",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData, passData);
}
inline void UnityEngine::Rendering::Universal::DecalGBufferRenderPass::ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                   ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData* passData,
                                                                                   ::UnityEngine::Rendering::RendererList rendererList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass*>(),
                                       { "ExecutePass",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RendererList>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, passData, rendererList);
}
inline void UnityEngine::Rendering::Universal::DecalGBufferRenderPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                         ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline void UnityEngine::Rendering::Universal::DecalGBufferRenderPass::OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass*
UnityEngine::Rendering::Universal::DecalGBufferRenderPass::New_ctor(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* settings,
                                                                    ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* drawSystem, bool decalLayers) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass*>(settings, drawSystem, decalLayers));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass::DecalGBufferRenderPass() {}
