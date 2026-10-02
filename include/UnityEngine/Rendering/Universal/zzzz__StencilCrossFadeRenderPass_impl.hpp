#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/StencilCrossFadeRenderPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__StencilCrossFadeRenderPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__StencilCrossFadeRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cdeafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData::__cordl_internal_get_depthTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthTarget;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData::__cordl_internal_get_depthTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthTarget;
}
constexpr void UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData::__cordl_internal_set_depthTarget(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depthTarget = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData::__cordl_internal_get_stencilDitherMaskSeedMaterials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilDitherMaskSeedMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData::__cordl_internal_get_stencilDitherMaskSeedMaterials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilDitherMaskSeedMaterials;
}
constexpr void UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData::__cordl_internal_set_stencilDitherMaskSeedMaterials(::ArrayW<::UnityW<::UnityEngine::Material>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stencilDitherMaskSeedMaterials = value;
}
inline void UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData* UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData::StencilCrossFadeRenderPass_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cdeb54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c._Render_b__8_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c::*)(
    ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c::_Render_b__8_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6cdeb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c*>(),
                                                                                           { "<Render>b__8_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c*, "<>9", ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c*>(
      std::forward<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c* UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c*, "<>9", ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c*>();
}
inline void UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c::setStaticF___9__8_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__8_0", ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c::getStaticF___9__8_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__8_0", ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c*>();
}
inline void UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c::_Render_b__8_0(::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData* data,
                                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c*>(),
                                                                                         { "<Render>b__8_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c* UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c::StencilCrossFadeRenderPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass::*)(::UnityEngine::Shader*)>(
    &::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass::_ctor)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x6cde254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass::*)()>(
    &::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass::Dispose)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6cde528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(
    &::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass::Render)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x6cde5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass*>(),
                                                { "Render",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass.ExecutePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::ArrayW<::UnityEngine::Material*>)>(
    &::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass::ExecutePass)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6cde974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass*>(),
                                                             { "ExecutePass",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                                 ::i2c::type_of<::ArrayW<::UnityEngine::Material*>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass::__cordl_internal_get_m_StencilDitherMaskSeedMaterials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilDitherMaskSeedMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass::__cordl_internal_get_m_StencilDitherMaskSeedMaterials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilDitherMaskSeedMaterials;
}
constexpr void UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass::__cordl_internal_set_m_StencilDitherMaskSeedMaterials(::ArrayW<::UnityW<::UnityEngine::Material>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StencilDitherMaskSeedMaterials = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass::__cordl_internal_get__StencilDitherPattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StencilDitherPattern;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass::__cordl_internal_get__StencilDitherPattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StencilDitherPattern;
}
constexpr void UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass::__cordl_internal_set__StencilDitherPattern(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____StencilDitherPattern = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass::__cordl_internal_get__StencilRefDitherMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StencilRefDitherMask;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass::__cordl_internal_get__StencilRefDitherMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StencilRefDitherMask;
}
constexpr void UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass::__cordl_internal_set__StencilRefDitherMask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____StencilRefDitherMask = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass::__cordl_internal_get__StencilWriteDitherMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StencilWriteDitherMask;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass::__cordl_internal_get__StencilWriteDitherMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StencilWriteDitherMask;
}
constexpr void UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass::__cordl_internal_set__StencilWriteDitherMask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____StencilWriteDitherMask = value;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass::__cordl_internal_get_m_ProfilingSampler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSampler;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler* const& UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass::__cordl_internal_get_m_ProfilingSampler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSampler;
}
constexpr void UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass::__cordl_internal_set_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProfilingSampler = value;
}
inline void UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass::_ctor(::UnityEngine::Shader* shader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shader);
}
inline void UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                  ::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthTarget) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass*>(),
                                              { "Render",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, context, depthTarget);
}
inline void UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass::ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* depthTarget,
                                                                                       ::ArrayW<::UnityEngine::Material*> stencilDitherMaskSeedMaterials) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass*>(),
                                                           { "ExecutePass",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                               ::i2c::type_of<::ArrayW<::UnityEngine::Material*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, depthTarget, stencilDitherMaskSeedMaterials);
}
inline ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass* UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass::New_ctor(::UnityEngine::Shader* shader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass*>(shader));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass::StencilCrossFadeRenderPass() {}
