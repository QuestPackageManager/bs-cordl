#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassRenderPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRenderPass_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRenderPass_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRendererSO_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__UnsafeGraphContext_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRenderPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRenderPass_PassData::*)()>(&::GlobalNamespace::BloomPrePassRenderPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5866f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRenderPass_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& GlobalNamespace::BloomPrePassRenderPass_PassData::__cordl_internal_get_cameraData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& GlobalNamespace::BloomPrePassRenderPass_PassData::__cordl_internal_get_cameraData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr void GlobalNamespace::BloomPrePassRenderPass_PassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraData = value;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassRendererSO>& GlobalNamespace::BloomPrePassRenderPass_PassData::__cordl_internal_get_renderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderer;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassRendererSO> const& GlobalNamespace::BloomPrePassRenderPass_PassData::__cordl_internal_get_renderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderer;
}
constexpr void GlobalNamespace::BloomPrePassRenderPass_PassData::__cordl_internal_set_renderer(::UnityW<::GlobalNamespace::BloomPrePassRendererSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderer = value;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO>& GlobalNamespace::BloomPrePassRenderPass_PassData::__cordl_internal_get_effect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effect;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> const& GlobalNamespace::BloomPrePassRenderPass_PassData::__cordl_internal_get_effect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effect;
}
constexpr void GlobalNamespace::BloomPrePassRenderPass_PassData::__cordl_internal_set_effect(::UnityW<::GlobalNamespace::BloomPrePassEffectSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___effect = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& GlobalNamespace::BloomPrePassRenderPass_PassData::__cordl_internal_get_lightsTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightsTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& GlobalNamespace::BloomPrePassRenderPass_PassData::__cordl_internal_get_lightsTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightsTexture;
}
constexpr void GlobalNamespace::BloomPrePassRenderPass_PassData::__cordl_internal_set_lightsTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightsTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& GlobalNamespace::BloomPrePassRenderPass_PassData::__cordl_internal_get_destinationTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& GlobalNamespace::BloomPrePassRenderPass_PassData::__cordl_internal_get_destinationTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr void GlobalNamespace::BloomPrePassRenderPass_PassData::__cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destinationTexture = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>& GlobalNamespace::BloomPrePassRenderPass_PassData::__cordl_internal_get_tempTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tempTextures;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const& GlobalNamespace::BloomPrePassRenderPass_PassData::__cordl_internal_get_tempTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tempTextures;
}
constexpr void GlobalNamespace::BloomPrePassRenderPass_PassData::__cordl_internal_set_tempTextures(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tempTextures = value;
}
inline void GlobalNamespace::BloomPrePassRenderPass_PassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRenderPass_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassRenderPass_PassData* GlobalNamespace::BloomPrePassRenderPass_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePassRenderPass_PassData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassRenderPass_PassData::BloomPrePassRenderPass_PassData() {}
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRenderPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRenderPass___c::*)()>(&::GlobalNamespace::BloomPrePassRenderPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5866f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRenderPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRenderPass___c._RecordRenderGraph_b__3_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::BloomPrePassRenderPass___c::*)(::GlobalNamespace::BloomPrePassRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
        &::GlobalNamespace::BloomPrePassRenderPass___c::_RecordRenderGraph_b__3_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5866f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRenderPass___c*>(),
                            { "<RecordRenderGraph>b__3_0",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::BloomPrePassRenderPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BloomPrePassRenderPass___c::setStaticF___9(::GlobalNamespace::BloomPrePassRenderPass___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BloomPrePassRenderPass___c*, "<>9", ::GlobalNamespace::BloomPrePassRenderPass___c*>(
      std::forward<::GlobalNamespace::BloomPrePassRenderPass___c*>(value));
}
inline ::GlobalNamespace::BloomPrePassRenderPass___c* GlobalNamespace::BloomPrePassRenderPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BloomPrePassRenderPass___c*, "<>9", ::GlobalNamespace::BloomPrePassRenderPass___c*>();
}
inline void GlobalNamespace::BloomPrePassRenderPass___c::setStaticF___9__3_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::BloomPrePassRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::BloomPrePassRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*, "<>9__3_0",
      ::GlobalNamespace::BloomPrePassRenderPass___c*>(
      std::forward<
          ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::BloomPrePassRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(
          value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::BloomPrePassRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
GlobalNamespace::BloomPrePassRenderPass___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::BloomPrePassRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*, "<>9__3_0",
      ::GlobalNamespace::BloomPrePassRenderPass___c*>();
}
inline void GlobalNamespace::BloomPrePassRenderPass___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRenderPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassRenderPass___c::_RecordRenderGraph_b__3_0(::GlobalNamespace::BloomPrePassRenderPass_PassData* data,
                                                                                   ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRenderPass___c*>(),
                          { "<RecordRenderGraph>b__3_0",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::BloomPrePassRenderPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::GlobalNamespace::BloomPrePassRenderPass___c* GlobalNamespace::BloomPrePassRenderPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePassRenderPass___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassRenderPass___c::BloomPrePassRenderPass___c() {}
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRenderPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRenderPass::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent, ::GlobalNamespace::BloomPrePassEffectSO*)>(&::GlobalNamespace::BloomPrePassRenderPass::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58657a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRenderPass*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::GlobalNamespace::BloomPrePassEffectSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRenderPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRenderPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::GlobalNamespace::BloomPrePassRenderPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x838;
  constexpr static std::size_t addrs = 0x58659ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRenderPass*>(), { ::i2c::class_of<::GlobalNamespace::BloomPrePassRenderPass*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRenderPass.ExecutePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::BloomPrePassRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::GlobalNamespace::BloomPrePassRenderPass::ExecutePass)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5866224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::BloomPrePassRenderPass*>(),
            { "ExecutePass", {}, { ::i2c::type_of<::GlobalNamespace::BloomPrePassRenderPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO>& GlobalNamespace::BloomPrePassRenderPass::__cordl_internal_get__effectOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectOverride;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> const& GlobalNamespace::BloomPrePassRenderPass::__cordl_internal_get__effectOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectOverride;
}
constexpr void GlobalNamespace::BloomPrePassRenderPass::__cordl_internal_set__effectOverride(::UnityW<::GlobalNamespace::BloomPrePassEffectSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____effectOverride = value;
}
inline void GlobalNamespace::BloomPrePassRenderPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::GlobalNamespace::BloomPrePassEffectSO* effectOverride) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRenderPass*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::GlobalNamespace::BloomPrePassEffectSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, effectOverride);
}
inline void GlobalNamespace::BloomPrePassRenderPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassRenderPass*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline void GlobalNamespace::BloomPrePassRenderPass::ExecutePass(::GlobalNamespace::BloomPrePassRenderPass_PassData* passData,
                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::BloomPrePassRenderPass*>(),
          { "ExecutePass", {}, { ::i2c::type_of<::GlobalNamespace::BloomPrePassRenderPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, passData, context);
}
inline ::GlobalNamespace::BloomPrePassRenderPass* GlobalNamespace::BloomPrePassRenderPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                                    ::GlobalNamespace::BloomPrePassEffectSO* effectOverride) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePassRenderPass*>(evt, effectOverride));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassRenderPass::BloomPrePassRenderPass() {}
