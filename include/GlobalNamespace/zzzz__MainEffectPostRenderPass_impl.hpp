#pragma once
// IWYU pragma private; include "GlobalNamespace\MainEffectPostRenderPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "GlobalNamespace/zzzz__MainEffectPostRenderPass_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectPostRenderPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__UnsafeGraphContext_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainEffectPostRenderPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectPostRenderPass_PassData::*)()>(&::GlobalNamespace::MainEffectPostRenderPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f45044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectPostRenderPass_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO>& GlobalNamespace::MainEffectPostRenderPass_PassData::__cordl_internal_get_effectContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effectContainer;
}
constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO> const& GlobalNamespace::MainEffectPostRenderPass_PassData::__cordl_internal_get_effectContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effectContainer;
}
constexpr void GlobalNamespace::MainEffectPostRenderPass_PassData::__cordl_internal_set_effectContainer(::UnityW<::GlobalNamespace::MainEffectContainerSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___effectContainer = value;
}
constexpr float_t& GlobalNamespace::MainEffectPostRenderPass_PassData::__cordl_internal_get_fadeValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeValue;
}
constexpr float_t const& GlobalNamespace::MainEffectPostRenderPass_PassData::__cordl_internal_get_fadeValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeValue;
}
constexpr void GlobalNamespace::MainEffectPostRenderPass_PassData::__cordl_internal_set_fadeValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fadeValue = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& GlobalNamespace::MainEffectPostRenderPass_PassData::__cordl_internal_get_activeColorTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeColorTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& GlobalNamespace::MainEffectPostRenderPass_PassData::__cordl_internal_get_activeColorTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeColorTexture;
}
constexpr void GlobalNamespace::MainEffectPostRenderPass_PassData::__cordl_internal_set_activeColorTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___activeColorTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& GlobalNamespace::MainEffectPostRenderPass_PassData::__cordl_internal_get_copyColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___copyColor;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& GlobalNamespace::MainEffectPostRenderPass_PassData::__cordl_internal_get_copyColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___copyColor;
}
constexpr void GlobalNamespace::MainEffectPostRenderPass_PassData::__cordl_internal_set_copyColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___copyColor = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& GlobalNamespace::MainEffectPostRenderPass_PassData::__cordl_internal_get_bloomTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& GlobalNamespace::MainEffectPostRenderPass_PassData::__cordl_internal_get_bloomTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomTexture;
}
constexpr void GlobalNamespace::MainEffectPostRenderPass_PassData::__cordl_internal_set_bloomTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bloomTexture = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>& GlobalNamespace::MainEffectPostRenderPass_PassData::__cordl_internal_get_tempTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tempTextures;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const& GlobalNamespace::MainEffectPostRenderPass_PassData::__cordl_internal_get_tempTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tempTextures;
}
constexpr void GlobalNamespace::MainEffectPostRenderPass_PassData::__cordl_internal_set_tempTextures(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tempTextures = value;
}
inline void GlobalNamespace::MainEffectPostRenderPass_PassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectPostRenderPass_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MainEffectPostRenderPass_PassData* GlobalNamespace::MainEffectPostRenderPass_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainEffectPostRenderPass_PassData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainEffectPostRenderPass_PassData::MainEffectPostRenderPass_PassData() {}
//  Writing Method size for method: ::GlobalNamespace::MainEffectPostRenderPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectPostRenderPass___c::*)()>(&::GlobalNamespace::MainEffectPostRenderPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4509c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectPostRenderPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectPostRenderPass___c._RecordRenderGraph_b__2_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::MainEffectPostRenderPass___c::*)(::GlobalNamespace::MainEffectPostRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
        &::GlobalNamespace::MainEffectPostRenderPass___c::_RecordRenderGraph_b__2_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f450a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectPostRenderPass___c*>(),
                            { "<RecordRenderGraph>b__2_0",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::MainEffectPostRenderPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectPostRenderPass___c._RecordRenderGraph_b__2_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::MainEffectPostRenderPass___c::*)(::GlobalNamespace::MainEffectPostRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
        &::GlobalNamespace::MainEffectPostRenderPass___c::_RecordRenderGraph_b__2_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f450ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectPostRenderPass___c*>(),
                            { "<RecordRenderGraph>b__2_1",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::MainEffectPostRenderPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MainEffectPostRenderPass___c::setStaticF___9(::GlobalNamespace::MainEffectPostRenderPass___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MainEffectPostRenderPass___c*, "<>9", ::GlobalNamespace::MainEffectPostRenderPass___c*>(
      std::forward<::GlobalNamespace::MainEffectPostRenderPass___c*>(value));
}
inline ::GlobalNamespace::MainEffectPostRenderPass___c* GlobalNamespace::MainEffectPostRenderPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MainEffectPostRenderPass___c*, "<>9", ::GlobalNamespace::MainEffectPostRenderPass___c*>();
}
inline void GlobalNamespace::MainEffectPostRenderPass___c::setStaticF___9__2_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectPostRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectPostRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
      "<>9__2_0", ::GlobalNamespace::MainEffectPostRenderPass___c*>(
      std::forward<
          ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectPostRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(
          value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectPostRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
GlobalNamespace::MainEffectPostRenderPass___c::getStaticF___9__2_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectPostRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
      "<>9__2_0", ::GlobalNamespace::MainEffectPostRenderPass___c*>();
}
inline void GlobalNamespace::MainEffectPostRenderPass___c::setStaticF___9__2_1(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectPostRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectPostRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__2_1", ::GlobalNamespace::MainEffectPostRenderPass___c*>(
      std::forward<
          ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectPostRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(
          value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectPostRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
GlobalNamespace::MainEffectPostRenderPass___c::getStaticF___9__2_1() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectPostRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__2_1", ::GlobalNamespace::MainEffectPostRenderPass___c*>();
}
inline void GlobalNamespace::MainEffectPostRenderPass___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectPostRenderPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainEffectPostRenderPass___c::_RecordRenderGraph_b__2_0(::GlobalNamespace::MainEffectPostRenderPass_PassData* data,
                                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectPostRenderPass___c*>(),
                          { "<RecordRenderGraph>b__2_0",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::MainEffectPostRenderPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void GlobalNamespace::MainEffectPostRenderPass___c::_RecordRenderGraph_b__2_1(::GlobalNamespace::MainEffectPostRenderPass_PassData* data,
                                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectPostRenderPass___c*>(),
                          { "<RecordRenderGraph>b__2_1",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::MainEffectPostRenderPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::GlobalNamespace::MainEffectPostRenderPass___c* GlobalNamespace::MainEffectPostRenderPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainEffectPostRenderPass___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainEffectPostRenderPass___c::MainEffectPostRenderPass___c() {}
//  Writing Method size for method: ::GlobalNamespace::MainEffectPostRenderPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectPostRenderPass::*)(::UnityEngine::Rendering::Universal::RenderPassEvent)>(
    &::GlobalNamespace::MainEffectPostRenderPass::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f435c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectPostRenderPass*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectPostRenderPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectPostRenderPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::GlobalNamespace::MainEffectPostRenderPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0xe5c;
  constexpr static std::size_t addrs = 0x5f43f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectPostRenderPass*>(), { ::i2c::class_of<::GlobalNamespace::MainEffectPostRenderPass*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectPostRenderPass.ExecutePyramidBloomPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::MainEffectPostRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::GlobalNamespace::MainEffectPostRenderPass::ExecutePyramidBloomPass)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5f44d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectPostRenderPass*>(),
                            { "ExecutePyramidBloomPass",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::MainEffectPostRenderPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectPostRenderPass.ExecuteNoPostProcessPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::MainEffectPostRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::GlobalNamespace::MainEffectPostRenderPass::ExecuteNoPostProcessPass)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f45008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectPostRenderPass*>(),
                            { "ExecuteNoPostProcessPass",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::MainEffectPostRenderPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MainEffectPostRenderPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectPostRenderPass*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void GlobalNamespace::MainEffectPostRenderPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainEffectPostRenderPass*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline void GlobalNamespace::MainEffectPostRenderPass::ExecutePyramidBloomPass(::GlobalNamespace::MainEffectPostRenderPass_PassData* passData,
                                                                               ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectPostRenderPass*>(),
                          { "ExecutePyramidBloomPass",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::MainEffectPostRenderPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, passData, context);
}
inline void GlobalNamespace::MainEffectPostRenderPass::ExecuteNoPostProcessPass(::GlobalNamespace::MainEffectPostRenderPass_PassData* passData,
                                                                                ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectPostRenderPass*>(),
                          { "ExecuteNoPostProcessPass",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::MainEffectPostRenderPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, passData, context);
}
inline ::GlobalNamespace::MainEffectPostRenderPass* GlobalNamespace::MainEffectPostRenderPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainEffectPostRenderPass*>(evt));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainEffectPostRenderPass::MainEffectPostRenderPass() {}
