#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\ScreenSpaceShadows.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceShadows_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceShadowsSettings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceShadows_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalShadowData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68b05ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData::__cordl_internal_get_target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData::__cordl_internal_get_target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData::__cordl_internal_set_target(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___target = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData::__cordl_internal_get_shadowmapID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowmapID;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData::__cordl_internal_get_shadowmapID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowmapID;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData::__cordl_internal_set_shadowmapID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shadowmapID = value;
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData* UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68b12e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c._RecordRenderGraph_b__11_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c::*)(
    ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c::_RecordRenderGraph_b__11_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x68b12e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c*>(),
                                                             { "<RecordRenderGraph>b__11_0",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void
UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c::setStaticF___9(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c*, "<>9",
                                    ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c*>(
      std::forward<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c* UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c*, "<>9",
                                           ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c*>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c::setStaticF___9__11_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__11_0", ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c::getStaticF___9__11_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__11_0", ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c*>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c::_RecordRenderGraph_b__11_0(
    ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext rgContext) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c*>(),
                                                                                         { "<RecordRenderGraph>b__11_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, rgContext);
}
inline ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c* UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c::ScreenSpaceShadowsPass_ScreenSpaceShadows___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x68afefc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x68b0578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::*)(
    ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings*, ::UnityEngine::Material*)>(&::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::Setup)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x68b0480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass*>(),
                                                { "Setup", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings*>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass.OnCameraSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::OnCameraSetup)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x68b05f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass.InitPassData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::*)(
    ::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData*>)>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::InitPassData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x68b076c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass*>(),
                                                { "InitPassData", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x7a4;
  constexpr static std::size_t addrs = 0x68b079c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass.ExecutePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*,
                                                                ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData*, ::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::ExecutePass)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x68b0f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass*>(),
                                                             { "ExecutePass",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::Execute)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x68b1080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass*>(), 10 }));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::__cordl_internal_get_m_Material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::__cordl_internal_get_m_Material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::__cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Material = value;
}
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings*& UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::__cordl_internal_get_m_CurrentSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentSettings;
}
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings* const&
UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::__cordl_internal_get_m_CurrentSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentSettings;
}
constexpr void
UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::__cordl_internal_set_m_CurrentSettings(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentSettings = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::__cordl_internal_get_m_RenderTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderTarget;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::__cordl_internal_get_m_RenderTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderTarget;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::__cordl_internal_set_m_RenderTarget(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderTarget = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::__cordl_internal_get_m_ScreenSpaceShadowmapTextureID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenSpaceShadowmapTextureID;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::__cordl_internal_get_m_ScreenSpaceShadowmapTextureID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenSpaceShadowmapTextureID;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::__cordl_internal_set_m_ScreenSpaceShadowmapTextureID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScreenSpaceShadowmapTextureID = value;
}
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData*&
UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::__cordl_internal_get_m_PassData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData* const&
UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::__cordl_internal_get_m_PassData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::__cordl_internal_set_m_PassData(
    ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PassData = value;
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::Setup(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings* featureSettings,
                                                                                                ::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass*>(),
                                              { "Setup", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings*>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, featureSettings, material);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                        ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, renderingData);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::InitPassData(
    ::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData*> passData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass*>(),
                                              { "InitPassData", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passData);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                            ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                                      ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData* data,
                                                                                                      ::UnityEngine::Rendering::RTHandle* target) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass*>(),
                                                                                         { "ExecutePass",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, data, target);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                  ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass* UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass::ScreenSpaceShadows_ScreenSpaceShadowsPass() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68b1b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass*&
UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData::__cordl_internal_get_pass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pass;
}
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass* const&
UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData::__cordl_internal_get_pass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pass;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData::__cordl_internal_set_pass(
    ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pass = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalShadowData*& UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData::__cordl_internal_get_shadowData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalShadowData* const&
UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData::__cordl_internal_get_shadowData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowData;
}
constexpr void
UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData::__cordl_internal_set_shadowData(::UnityEngine::Rendering::Universal::UniversalShadowData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shadowData = value;
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData*
UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68b1b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c._RecordRenderGraph_b__6_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c::*)(
    ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c::_RecordRenderGraph_b__6_0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x68b1b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c*>(),
                                                             { "<RecordRenderGraph>b__6_0",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void
UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c::setStaticF___9(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c*, "<>9",
                                    ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c*>(
      std::forward<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c* UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c*, "<>9",
                                           ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c*>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c::setStaticF___9__6_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__6_0", ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__6_0", ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c*>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c::_RecordRenderGraph_b__6_0(
    ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext rgContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c*>(),
                                                           { "<RecordRenderGraph>b__6_0",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, rgContext);
}
inline ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c* UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x68b002c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass.Configure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor)>(&::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass::Configure)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x68b1370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass.ExecutePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalShadowData*)>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass::ExecutePass)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x68b13d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass*>(),
                            { "ExecutePass", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass::Execute)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x68b149c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x68b15dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass*>(), 11 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass::setStaticF_k_CurrentActive(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "k_CurrentActive", ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass*>(
      std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass::getStaticF_k_CurrentActive() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "k_CurrentActive", ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass*>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass::Configure(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                        ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, cameraTextureDescriptor);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass::ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                                          ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass*>(),
                          { "ExecutePass", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, shadowData);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                      ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                                ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass* UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass::ScreenSpaceShadows_ScreenSpaceShadowsPostPass() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceShadows.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceShadows::*)()>(&::UnityEngine::Rendering::Universal::ScreenSpaceShadows::Create)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x68afe3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceShadows.AddRenderPasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceShadows::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*,
                                                                                                                         ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceShadows::AddRenderPasses)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x68b0240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceShadows.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceShadows::*)(bool)>(&::UnityEngine::Rendering::Universal::ScreenSpaceShadows::Dispose)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x68b04fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceShadows.LoadMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScreenSpaceShadows::*)()>(&::UnityEngine::Rendering::Universal::ScreenSpaceShadows::LoadMaterial)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x68b00e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows*>(), { "LoadMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceShadows._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceShadows::*)()>(&::UnityEngine::Rendering::Universal::ScreenSpaceShadows::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68b058c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::ScreenSpaceShadows::__cordl_internal_get_m_Shader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Shader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::ScreenSpaceShadows::__cordl_internal_get_m_Shader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Shader;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceShadows::__cordl_internal_set_m_Shader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Shader = value;
}
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings*& UnityEngine::Rendering::Universal::ScreenSpaceShadows::__cordl_internal_get_m_Settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings* const& UnityEngine::Rendering::Universal::ScreenSpaceShadows::__cordl_internal_get_m_Settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceShadows::__cordl_internal_set_m_Settings(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Settings = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::ScreenSpaceShadows::__cordl_internal_get_m_Material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::ScreenSpaceShadows::__cordl_internal_get_m_Material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceShadows::__cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Material = value;
}
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass*& UnityEngine::Rendering::Universal::ScreenSpaceShadows::__cordl_internal_get_m_SSShadowsPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SSShadowsPass;
}
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass* const& UnityEngine::Rendering::Universal::ScreenSpaceShadows::__cordl_internal_get_m_SSShadowsPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SSShadowsPass;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceShadows::__cordl_internal_set_m_SSShadowsPass(::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SSShadowsPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass*& UnityEngine::Rendering::Universal::ScreenSpaceShadows::__cordl_internal_get_m_SSShadowsPostPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SSShadowsPostPass;
}
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass* const&
UnityEngine::Rendering::Universal::ScreenSpaceShadows::__cordl_internal_get_m_SSShadowsPostPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SSShadowsPostPass;
}
constexpr void
UnityEngine::Rendering::Universal::ScreenSpaceShadows::__cordl_internal_set_m_SSShadowsPostPass(::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SSShadowsPostPass = value;
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceShadows::Create() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceShadows::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                                   ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, renderingData);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceShadows::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool UnityEngine::Rendering::Universal::ScreenSpaceShadows::LoadMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows*>(), { "LoadMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceShadows::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceShadows*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScreenSpaceShadows* UnityEngine::Rendering::Universal::ScreenSpaceShadows::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScreenSpaceShadows*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadows::ScreenSpaceShadows() {}
