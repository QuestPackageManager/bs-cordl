#pragma once
// IWYU pragma private; include "GlobalNamespace\PlanarMirrorBloomPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "GlobalNamespace/zzzz__PlanarMirrorBloomPass_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__MirrorFrameData_def.hpp"
#include "GlobalNamespace/zzzz__PlanarMirrorBloomPass_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__UnsafeGraphContext_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlanarMirrorBloomPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlanarMirrorBloomPass_PassData::*)()>(&::GlobalNamespace::PlanarMirrorBloomPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f49b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlanarMirrorBloomPass_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& GlobalNamespace::PlanarMirrorBloomPass_PassData::__cordl_internal_get_cameraData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& GlobalNamespace::PlanarMirrorBloomPass_PassData::__cordl_internal_get_cameraData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr void GlobalNamespace::PlanarMirrorBloomPass_PassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraData = value;
}
constexpr ::GlobalNamespace::MirrorFrameData*& GlobalNamespace::PlanarMirrorBloomPass_PassData::__cordl_internal_get_mirrorFrameData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorFrameData;
}
constexpr ::GlobalNamespace::MirrorFrameData* const& GlobalNamespace::PlanarMirrorBloomPass_PassData::__cordl_internal_get_mirrorFrameData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorFrameData;
}
constexpr void GlobalNamespace::PlanarMirrorBloomPass_PassData::__cordl_internal_set_mirrorFrameData(::GlobalNamespace::MirrorFrameData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mirrorFrameData = value;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassRendererSO>& GlobalNamespace::PlanarMirrorBloomPass_PassData::__cordl_internal_get_renderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderer;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassRendererSO> const& GlobalNamespace::PlanarMirrorBloomPass_PassData::__cordl_internal_get_renderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderer;
}
constexpr void GlobalNamespace::PlanarMirrorBloomPass_PassData::__cordl_internal_set_renderer(::UnityW<::GlobalNamespace::BloomPrePassRendererSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderer = value;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO>& GlobalNamespace::PlanarMirrorBloomPass_PassData::__cordl_internal_get_effect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effect;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> const& GlobalNamespace::PlanarMirrorBloomPass_PassData::__cordl_internal_get_effect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effect;
}
constexpr void GlobalNamespace::PlanarMirrorBloomPass_PassData::__cordl_internal_set_effect(::UnityW<::GlobalNamespace::BloomPrePassEffectSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___effect = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& GlobalNamespace::PlanarMirrorBloomPass_PassData::__cordl_internal_get_lightsTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightsTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& GlobalNamespace::PlanarMirrorBloomPass_PassData::__cordl_internal_get_lightsTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightsTexture;
}
constexpr void GlobalNamespace::PlanarMirrorBloomPass_PassData::__cordl_internal_set_lightsTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightsTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& GlobalNamespace::PlanarMirrorBloomPass_PassData::__cordl_internal_get_destinationTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& GlobalNamespace::PlanarMirrorBloomPass_PassData::__cordl_internal_get_destinationTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr void GlobalNamespace::PlanarMirrorBloomPass_PassData::__cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destinationTexture = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>& GlobalNamespace::PlanarMirrorBloomPass_PassData::__cordl_internal_get_tempTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tempTextures;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const& GlobalNamespace::PlanarMirrorBloomPass_PassData::__cordl_internal_get_tempTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tempTextures;
}
constexpr void GlobalNamespace::PlanarMirrorBloomPass_PassData::__cordl_internal_set_tempTextures(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tempTextures = value;
}
constexpr ::UnityEngine::Experimental::Rendering::XRPass*& GlobalNamespace::PlanarMirrorBloomPass_PassData::__cordl_internal_get_xr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xr;
}
constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& GlobalNamespace::PlanarMirrorBloomPass_PassData::__cordl_internal_get_xr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xr;
}
constexpr void GlobalNamespace::PlanarMirrorBloomPass_PassData::__cordl_internal_set_xr(::UnityEngine::Experimental::Rendering::XRPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xr = value;
}
inline void GlobalNamespace::PlanarMirrorBloomPass_PassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlanarMirrorBloomPass_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlanarMirrorBloomPass_PassData* GlobalNamespace::PlanarMirrorBloomPass_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlanarMirrorBloomPass_PassData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlanarMirrorBloomPass_PassData::PlanarMirrorBloomPass_PassData() {}
//  Writing Method size for method: ::GlobalNamespace::PlanarMirrorBloomPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlanarMirrorBloomPass___c::*)()>(&::GlobalNamespace::PlanarMirrorBloomPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f49be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlanarMirrorBloomPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlanarMirrorBloomPass___c._RecordRenderGraph_b__4_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlanarMirrorBloomPass___c::*)(
    ::GlobalNamespace::PlanarMirrorBloomPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(&::GlobalNamespace::PlanarMirrorBloomPass___c::_RecordRenderGraph_b__4_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f49be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlanarMirrorBloomPass___c*>(),
                            { "<RecordRenderGraph>b__4_0",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::PlanarMirrorBloomPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlanarMirrorBloomPass___c::setStaticF___9(::GlobalNamespace::PlanarMirrorBloomPass___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::PlanarMirrorBloomPass___c*, "<>9", ::GlobalNamespace::PlanarMirrorBloomPass___c*>(
      std::forward<::GlobalNamespace::PlanarMirrorBloomPass___c*>(value));
}
inline ::GlobalNamespace::PlanarMirrorBloomPass___c* GlobalNamespace::PlanarMirrorBloomPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::PlanarMirrorBloomPass___c*, "<>9", ::GlobalNamespace::PlanarMirrorBloomPass___c*>();
}
inline void GlobalNamespace::PlanarMirrorBloomPass___c::setStaticF___9__4_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::PlanarMirrorBloomPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::PlanarMirrorBloomPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*, "<>9__4_0",
      ::GlobalNamespace::PlanarMirrorBloomPass___c*>(
      std::forward<
          ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::PlanarMirrorBloomPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::PlanarMirrorBloomPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
GlobalNamespace::PlanarMirrorBloomPass___c::getStaticF___9__4_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::PlanarMirrorBloomPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*, "<>9__4_0",
      ::GlobalNamespace::PlanarMirrorBloomPass___c*>();
}
inline void GlobalNamespace::PlanarMirrorBloomPass___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlanarMirrorBloomPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlanarMirrorBloomPass___c::_RecordRenderGraph_b__4_0(::GlobalNamespace::PlanarMirrorBloomPass_PassData* data,
                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlanarMirrorBloomPass___c*>(),
                          { "<RecordRenderGraph>b__4_0",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::PlanarMirrorBloomPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::GlobalNamespace::PlanarMirrorBloomPass___c* GlobalNamespace::PlanarMirrorBloomPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlanarMirrorBloomPass___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlanarMirrorBloomPass___c::PlanarMirrorBloomPass___c() {}
//  Writing Method size for method: ::GlobalNamespace::PlanarMirrorBloomPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlanarMirrorBloomPass::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent, ::GlobalNamespace::BloomPrePassEffectSO*)>(&::GlobalNamespace::PlanarMirrorBloomPass::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f48c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlanarMirrorBloomPass*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::GlobalNamespace::BloomPrePassEffectSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlanarMirrorBloomPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlanarMirrorBloomPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::GlobalNamespace::PlanarMirrorBloomPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x7d0;
  constexpr static std::size_t addrs = 0x5f49094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlanarMirrorBloomPass*>(), { ::i2c::class_of<::GlobalNamespace::PlanarMirrorBloomPass*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlanarMirrorBloomPass.ExecutePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PlanarMirrorBloomPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::GlobalNamespace::PlanarMirrorBloomPass::ExecutePass)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x5f49864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::PlanarMirrorBloomPass*>(),
            { "ExecutePass", {}, { ::i2c::type_of<::GlobalNamespace::PlanarMirrorBloomPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO>& GlobalNamespace::PlanarMirrorBloomPass::__cordl_internal_get__effectOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectOverride;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> const& GlobalNamespace::PlanarMirrorBloomPass::__cordl_internal_get__effectOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectOverride;
}
constexpr void GlobalNamespace::PlanarMirrorBloomPass::__cordl_internal_set__effectOverride(::UnityW<::GlobalNamespace::BloomPrePassEffectSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____effectOverride = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>& GlobalNamespace::PlanarMirrorBloomPass::__cordl_internal_get__tempTextureHandles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tempTextureHandles;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const& GlobalNamespace::PlanarMirrorBloomPass::__cordl_internal_get__tempTextureHandles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tempTextureHandles;
}
constexpr void GlobalNamespace::PlanarMirrorBloomPass::__cordl_internal_set__tempTextureHandles(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tempTextureHandles = value;
}
inline void GlobalNamespace::PlanarMirrorBloomPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent, ::GlobalNamespace::BloomPrePassEffectSO* effectOverride) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlanarMirrorBloomPass*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::GlobalNamespace::BloomPrePassEffectSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderPassEvent, effectOverride);
}
inline void GlobalNamespace::PlanarMirrorBloomPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlanarMirrorBloomPass*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline void GlobalNamespace::PlanarMirrorBloomPass::ExecutePass(::GlobalNamespace::PlanarMirrorBloomPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::PlanarMirrorBloomPass*>(),
          { "ExecutePass", {}, { ::i2c::type_of<::GlobalNamespace::PlanarMirrorBloomPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, context);
}
inline ::GlobalNamespace::PlanarMirrorBloomPass* GlobalNamespace::PlanarMirrorBloomPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent,
                                                                                                  ::GlobalNamespace::BloomPrePassEffectSO* effectOverride) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlanarMirrorBloomPass*>(renderPassEvent, effectOverride));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlanarMirrorBloomPass::PlanarMirrorBloomPass() {}
