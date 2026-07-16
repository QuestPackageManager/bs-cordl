#pragma once
// IWYU pragma private; include "GlobalNamespace/MainEffectPreRenderPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "GlobalNamespace/zzzz__MainEffectPreRenderPass_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectPreRenderPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainEffectPreRenderPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectPreRenderPass_PassData::*)()>(&::GlobalNamespace::MainEffectPreRenderPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f41980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectPreRenderPass_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO>& GlobalNamespace::MainEffectPreRenderPass_PassData::__cordl_internal_get_effectContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effectContainer;
}
constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO> const& GlobalNamespace::MainEffectPreRenderPass_PassData::__cordl_internal_get_effectContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effectContainer;
}
constexpr void GlobalNamespace::MainEffectPreRenderPass_PassData::__cordl_internal_set_effectContainer(::UnityW<::GlobalNamespace::MainEffectContainerSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___effectContainer = value;
}
inline void GlobalNamespace::MainEffectPreRenderPass_PassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectPreRenderPass_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MainEffectPreRenderPass_PassData* GlobalNamespace::MainEffectPreRenderPass_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainEffectPreRenderPass_PassData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainEffectPreRenderPass_PassData::MainEffectPreRenderPass_PassData() {}
//  Writing Method size for method: ::GlobalNamespace::MainEffectPreRenderPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectPreRenderPass___c::*)()>(&::GlobalNamespace::MainEffectPreRenderPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f419d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectPreRenderPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectPreRenderPass___c._RecordRenderGraph_b__2_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::MainEffectPreRenderPass___c::*)(::GlobalNamespace::MainEffectPreRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
        &::GlobalNamespace::MainEffectPreRenderPass___c::_RecordRenderGraph_b__2_0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f419dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectPreRenderPass___c*>(),
                            { "<RecordRenderGraph>b__2_0",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::MainEffectPreRenderPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MainEffectPreRenderPass___c::setStaticF___9(::GlobalNamespace::MainEffectPreRenderPass___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MainEffectPreRenderPass___c*, "<>9", ::GlobalNamespace::MainEffectPreRenderPass___c*>(
      std::forward<::GlobalNamespace::MainEffectPreRenderPass___c*>(value));
}
inline ::GlobalNamespace::MainEffectPreRenderPass___c* GlobalNamespace::MainEffectPreRenderPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MainEffectPreRenderPass___c*, "<>9", ::GlobalNamespace::MainEffectPreRenderPass___c*>();
}
inline void GlobalNamespace::MainEffectPreRenderPass___c::setStaticF___9__2_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectPreRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectPreRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__2_0",
      ::GlobalNamespace::MainEffectPreRenderPass___c*>(
      std::forward<
          ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectPreRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(
          value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectPreRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
GlobalNamespace::MainEffectPreRenderPass___c::getStaticF___9__2_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectPreRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__2_0",
      ::GlobalNamespace::MainEffectPreRenderPass___c*>();
}
inline void GlobalNamespace::MainEffectPreRenderPass___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectPreRenderPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainEffectPreRenderPass___c::_RecordRenderGraph_b__2_0(::GlobalNamespace::MainEffectPreRenderPass_PassData* data,
                                                                                    ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectPreRenderPass___c*>(),
                          { "<RecordRenderGraph>b__2_0",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::MainEffectPreRenderPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::GlobalNamespace::MainEffectPreRenderPass___c* GlobalNamespace::MainEffectPreRenderPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainEffectPreRenderPass___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainEffectPreRenderPass___c::MainEffectPreRenderPass___c() {}
//  Writing Method size for method: ::GlobalNamespace::MainEffectPreRenderPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectPreRenderPass::*)(::UnityEngine::Rendering::Universal::RenderPassEvent)>(
    &::GlobalNamespace::MainEffectPreRenderPass::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f413cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectPreRenderPass*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectPreRenderPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectPreRenderPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::GlobalNamespace::MainEffectPreRenderPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x5f41504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectPreRenderPass*>(), { ::i2c::class_of<::GlobalNamespace::MainEffectPreRenderPass*>(), 11 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MainEffectPreRenderPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectPreRenderPass*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void GlobalNamespace::MainEffectPreRenderPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainEffectPreRenderPass*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline ::GlobalNamespace::MainEffectPreRenderPass* GlobalNamespace::MainEffectPreRenderPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainEffectPreRenderPass*>(evt));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainEffectPreRenderPass::MainEffectPreRenderPass() {}
