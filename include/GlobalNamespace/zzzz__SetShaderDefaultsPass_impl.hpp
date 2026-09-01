#pragma once
// IWYU pragma private; include "GlobalNamespace\SetShaderDefaultsPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "GlobalNamespace/zzzz__SetShaderDefaultsPass_def.hpp"
#include "GlobalNamespace/zzzz__SetShaderDefaultsPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SetShaderDefaultsPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetShaderDefaultsPass_PassData::*)()>(&::GlobalNamespace::SetShaderDefaultsPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4ed98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetShaderDefaultsPass_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SetShaderDefaultsPass_PassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetShaderDefaultsPass_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SetShaderDefaultsPass_PassData* GlobalNamespace::SetShaderDefaultsPass_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SetShaderDefaultsPass_PassData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetShaderDefaultsPass_PassData::SetShaderDefaultsPass_PassData() {}
//  Writing Method size for method: ::GlobalNamespace::SetShaderDefaultsPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetShaderDefaultsPass___c::*)()>(&::GlobalNamespace::SetShaderDefaultsPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4edf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetShaderDefaultsPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetShaderDefaultsPass___c._RecordRenderGraph_b__2_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetShaderDefaultsPass___c::*)(
    ::GlobalNamespace::SetShaderDefaultsPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(&::GlobalNamespace::SetShaderDefaultsPass___c::_RecordRenderGraph_b__2_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f4edf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetShaderDefaultsPass___c*>(),
                            { "<RecordRenderGraph>b__2_0",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::SetShaderDefaultsPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SetShaderDefaultsPass___c::setStaticF___9(::GlobalNamespace::SetShaderDefaultsPass___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::SetShaderDefaultsPass___c*, "<>9", ::GlobalNamespace::SetShaderDefaultsPass___c*>(
      std::forward<::GlobalNamespace::SetShaderDefaultsPass___c*>(value));
}
inline ::GlobalNamespace::SetShaderDefaultsPass___c* GlobalNamespace::SetShaderDefaultsPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::SetShaderDefaultsPass___c*, "<>9", ::GlobalNamespace::SetShaderDefaultsPass___c*>();
}
inline void GlobalNamespace::SetShaderDefaultsPass___c::setStaticF___9__2_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::SetShaderDefaultsPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::SetShaderDefaultsPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__2_0",
      ::GlobalNamespace::SetShaderDefaultsPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::SetShaderDefaultsPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(
          value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::SetShaderDefaultsPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
GlobalNamespace::SetShaderDefaultsPass___c::getStaticF___9__2_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::SetShaderDefaultsPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__2_0",
      ::GlobalNamespace::SetShaderDefaultsPass___c*>();
}
inline void GlobalNamespace::SetShaderDefaultsPass___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetShaderDefaultsPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SetShaderDefaultsPass___c::_RecordRenderGraph_b__2_0(::GlobalNamespace::SetShaderDefaultsPass_PassData* data,
                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetShaderDefaultsPass___c*>(),
                          { "<RecordRenderGraph>b__2_0",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::SetShaderDefaultsPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::GlobalNamespace::SetShaderDefaultsPass___c* GlobalNamespace::SetShaderDefaultsPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SetShaderDefaultsPass___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetShaderDefaultsPass___c::SetShaderDefaultsPass___c() {}
//  Writing Method size for method: ::GlobalNamespace::SetShaderDefaultsPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetShaderDefaultsPass::*)(::UnityEngine::Rendering::Universal::RenderPassEvent)>(
    &::GlobalNamespace::SetShaderDefaultsPass::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f4e934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetShaderDefaultsPass*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetShaderDefaultsPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetShaderDefaultsPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::GlobalNamespace::SetShaderDefaultsPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x5f4e9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetShaderDefaultsPass*>(), { ::i2c::class_of<::GlobalNamespace::SetShaderDefaultsPass*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetShaderDefaultsPass.ExecutePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::SetShaderDefaultsPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::GlobalNamespace::SetShaderDefaultsPass::ExecutePass)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f4ed2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::SetShaderDefaultsPass*>(),
            { "ExecutePass", {}, { ::i2c::type_of<::GlobalNamespace::SetShaderDefaultsPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SetShaderDefaultsPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetShaderDefaultsPass*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void GlobalNamespace::SetShaderDefaultsPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SetShaderDefaultsPass*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline void GlobalNamespace::SetShaderDefaultsPass::ExecutePass(::GlobalNamespace::SetShaderDefaultsPass_PassData* passData, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::SetShaderDefaultsPass*>(),
          { "ExecutePass", {}, { ::i2c::type_of<::GlobalNamespace::SetShaderDefaultsPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, passData, context);
}
inline ::GlobalNamespace::SetShaderDefaultsPass* GlobalNamespace::SetShaderDefaultsPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SetShaderDefaultsPass*>(evt));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetShaderDefaultsPass::SetShaderDefaultsPass() {}
