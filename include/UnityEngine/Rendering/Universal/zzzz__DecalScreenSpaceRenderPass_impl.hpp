#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\DecalScreenSpaceRenderPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalScreenSpaceRenderPass_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawScreenSpaceSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalScreenSpaceRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalScreenSpaceSettings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalLightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererListParams_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x686296c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem*& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_get_drawSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawSystem;
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* const& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_get_drawSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawSystem;
}
constexpr void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_set_drawSystem(::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___drawSystem = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_get_settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* const& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_get_settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_set_settings(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___settings = value;
}
constexpr bool& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_get_decalLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decalLayers;
}
constexpr bool const& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_get_decalLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decalLayers;
}
constexpr void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_set_decalLayers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decalLayers = value;
}
constexpr bool& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_get_isGLDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isGLDevice;
}
constexpr bool const& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_get_isGLDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isGLDevice;
}
constexpr void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_set_isGLDevice(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isGLDevice = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_get_colorTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorTarget;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_get_colorTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorTarget;
}
constexpr void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_set_colorTarget(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorTarget = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_get_cameraData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_get_cameraData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraData = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_get_rendererList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererList;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_get_rendererList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererList;
}
constexpr void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_set_rendererList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rendererList = value;
}
inline void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData* UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::DecalScreenSpaceRenderPass_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68639b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c._RecordRenderGraph_b__12_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c::*)(
    ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c::_RecordRenderGraph_b__12_0)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x68639bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c*>(),
                                                                                           { "<RecordRenderGraph>b__12_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c*, "<>9", ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c*>(
      std::forward<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c* UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c*, "<>9", ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c*>();
}
inline void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c::setStaticF___9__12_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__12_0", ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__12_0", ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c*>();
}
inline void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c::_RecordRenderGraph_b__12_0(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData* data,
                                                                                                          ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext rgContext) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c*>(),
                                                                                         { "<RecordRenderGraph>b__12_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, rgContext);
}
inline ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c* UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c::DecalScreenSpaceRenderPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::*)(
    ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*, ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem*, bool)>(
    &::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::_ctor)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x68626d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass.CreateRenderListParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RendererListParams (::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::*)(
    ::UnityEngine::Rendering::Universal::UniversalRenderingData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::UniversalLightData*)>(
    &::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::CreateRenderListParams)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6862970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>(),
                                                                                           { "CreateRenderListParams",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::Execute)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x6862a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass.InitPassData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::*)(
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::by_ref<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*>)>(
    &::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::InitPassData)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6862d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>(),
                                                             { "InitPassData",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass.ExecutePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*,
                                                                ::UnityEngine::Rendering::RendererList)>(&::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::ExecutePass)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6862e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>(),
                                                                                           { "ExecutePass",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RendererList>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x8d8;
  constexpr static std::size_t addrs = 0x6862fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass.OnCameraCleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::OnCameraCleanup)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6863878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>(), 8 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::FilteringSettings& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_get_m_FilteringSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr ::UnityEngine::Rendering::FilteringSettings const& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_get_m_FilteringSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FilteringSettings = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_get_m_ShaderTagIdList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderTagIdList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* const&
UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_get_m_ShaderTagIdList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderTagIdList;
}
constexpr void
UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_set_m_ShaderTagIdList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShaderTagIdList = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem*& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_get_m_DrawSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawSystem;
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* const& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_get_m_DrawSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawSystem;
}
constexpr void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_set_m_DrawSystem(::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DrawSystem = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_get_m_Settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* const& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_get_m_Settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_set_m_Settings(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Settings = value;
}
constexpr bool& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_get_m_DecalLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalLayers;
}
constexpr bool const& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_get_m_DecalLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalLayers;
}
constexpr void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_set_m_DecalLayers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DecalLayers = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_get_m_PassData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData* const& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_get_m_PassData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PassData = value;
}
inline void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::_ctor(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* settings,
                                                                                 ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* drawSystem, bool decalLayers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings, drawSystem, decalLayers);
}
inline ::UnityEngine::Rendering::RendererListParams
UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::CreateRenderListParams(::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                                                                      ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                      ::UnityEngine::Rendering::Universal::UniversalLightData* lightData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>(),
                                       { "CreateRenderListParams",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererListParams>(this, ___internal_method, renderingData, cameraData, lightData);
}
inline void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                   ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::InitPassData(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                        ::by_ref<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*> passData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>(),
                                                           { "InitPassData",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData, passData);
}
inline void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                       ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData* passData,
                                                                                       ::UnityEngine::Rendering::RendererList rendererList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>(),
                                       { "ExecutePass",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RendererList>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, passData, rendererList);
}
inline void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                             ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*
UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::New_ctor(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* settings,
                                                                        ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* drawSystem, bool decalLayers) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>(settings, drawSystem, decalLayers));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::DecalScreenSpaceRenderPass() {}
