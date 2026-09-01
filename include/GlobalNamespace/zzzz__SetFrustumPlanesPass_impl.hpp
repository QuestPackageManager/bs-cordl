#pragma once
// IWYU pragma private; include "GlobalNamespace\SetFrustumPlanesPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/zzzz__Plane_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__SetFrustumPlanesPass_def.hpp"
#include "GlobalNamespace/zzzz__SetFrustumPlanesPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SetFrustumPlanesPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetFrustumPlanesPass_PassData::*)()>(&::GlobalNamespace::SetFrustumPlanesPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4e80c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetFrustumPlanesPass_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& GlobalNamespace::SetFrustumPlanesPass_PassData::__cordl_internal_get_cameraData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& GlobalNamespace::SetFrustumPlanesPass_PassData::__cordl_internal_get_cameraData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr void GlobalNamespace::SetFrustumPlanesPass_PassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraData = value;
}
constexpr bool& GlobalNamespace::SetFrustumPlanesPass_PassData::__cordl_internal_get_visualise() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visualise;
}
constexpr bool const& GlobalNamespace::SetFrustumPlanesPass_PassData::__cordl_internal_get_visualise() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visualise;
}
constexpr void GlobalNamespace::SetFrustumPlanesPass_PassData::__cordl_internal_set_visualise(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___visualise = value;
}
inline void GlobalNamespace::SetFrustumPlanesPass_PassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetFrustumPlanesPass_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SetFrustumPlanesPass_PassData* GlobalNamespace::SetFrustumPlanesPass_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SetFrustumPlanesPass_PassData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetFrustumPlanesPass_PassData::SetFrustumPlanesPass_PassData() {}
//  Writing Method size for method: ::GlobalNamespace::SetFrustumPlanesPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetFrustumPlanesPass___c::*)()>(&::GlobalNamespace::SetFrustumPlanesPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4e864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetFrustumPlanesPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetFrustumPlanesPass___c._RecordRenderGraph_b__6_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetFrustumPlanesPass___c::*)(
    ::GlobalNamespace::SetFrustumPlanesPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(&::GlobalNamespace::SetFrustumPlanesPass___c::_RecordRenderGraph_b__6_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f4e868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetFrustumPlanesPass___c*>(),
                            { "<RecordRenderGraph>b__6_0",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::SetFrustumPlanesPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SetFrustumPlanesPass___c::setStaticF___9(::GlobalNamespace::SetFrustumPlanesPass___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::SetFrustumPlanesPass___c*, "<>9", ::GlobalNamespace::SetFrustumPlanesPass___c*>(
      std::forward<::GlobalNamespace::SetFrustumPlanesPass___c*>(value));
}
inline ::GlobalNamespace::SetFrustumPlanesPass___c* GlobalNamespace::SetFrustumPlanesPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::SetFrustumPlanesPass___c*, "<>9", ::GlobalNamespace::SetFrustumPlanesPass___c*>();
}
inline void GlobalNamespace::SetFrustumPlanesPass___c::setStaticF___9__6_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::SetFrustumPlanesPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::SetFrustumPlanesPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__6_0",
      ::GlobalNamespace::SetFrustumPlanesPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::SetFrustumPlanesPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(
          value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::SetFrustumPlanesPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
GlobalNamespace::SetFrustumPlanesPass___c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::SetFrustumPlanesPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__6_0",
      ::GlobalNamespace::SetFrustumPlanesPass___c*>();
}
inline void GlobalNamespace::SetFrustumPlanesPass___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetFrustumPlanesPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SetFrustumPlanesPass___c::_RecordRenderGraph_b__6_0(::GlobalNamespace::SetFrustumPlanesPass_PassData* data,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetFrustumPlanesPass___c*>(),
                          { "<RecordRenderGraph>b__6_0",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::SetFrustumPlanesPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::GlobalNamespace::SetFrustumPlanesPass___c* GlobalNamespace::SetFrustumPlanesPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SetFrustumPlanesPass___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetFrustumPlanesPass___c::SetFrustumPlanesPass___c() {}
//  Writing Method size for method: ::GlobalNamespace::SetFrustumPlanesPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetFrustumPlanesPass::*)(::UnityEngine::Rendering::Universal::RenderPassEvent, bool)>(
    &::GlobalNamespace::SetFrustumPlanesPass::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f4e080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetFrustumPlanesPass*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetFrustumPlanesPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetFrustumPlanesPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::GlobalNamespace::SetFrustumPlanesPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x5f4e12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetFrustumPlanesPass*>(), { ::i2c::class_of<::GlobalNamespace::SetFrustumPlanesPass*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetFrustumPlanesPass.ExecutePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::SetFrustumPlanesPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::GlobalNamespace::SetFrustumPlanesPass::ExecutePass)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5f4e4d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::SetFrustumPlanesPass*>(),
            { "ExecutePass", {}, { ::i2c::type_of<::GlobalNamespace::SetFrustumPlanesPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::SetFrustumPlanesPass::__cordl_internal_get__visualise() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visualise;
}
constexpr bool const& GlobalNamespace::SetFrustumPlanesPass::__cordl_internal_get__visualise() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visualise;
}
constexpr void GlobalNamespace::SetFrustumPlanesPass::__cordl_internal_set__visualise(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____visualise = value;
}
inline void GlobalNamespace::SetFrustumPlanesPass::setStaticF__planes(::ArrayW<::UnityEngine::Plane> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Plane>, "_planes", ::GlobalNamespace::SetFrustumPlanesPass*>(std::forward<::ArrayW<::UnityEngine::Plane>>(value));
}
inline ::ArrayW<::UnityEngine::Plane> GlobalNamespace::SetFrustumPlanesPass::getStaticF__planes() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Plane>, "_planes", ::GlobalNamespace::SetFrustumPlanesPass*>();
}
inline void GlobalNamespace::SetFrustumPlanesPass::setStaticF__vectorPlanes(::ArrayW<::UnityEngine::Vector4> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector4>, "_vectorPlanes", ::GlobalNamespace::SetFrustumPlanesPass*>(std::forward<::ArrayW<::UnityEngine::Vector4>>(value));
}
inline ::ArrayW<::UnityEngine::Vector4> GlobalNamespace::SetFrustumPlanesPass::getStaticF__vectorPlanes() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector4>, "_vectorPlanes", ::GlobalNamespace::SetFrustumPlanesPass*>();
}
inline void GlobalNamespace::SetFrustumPlanesPass::setStaticF_kFrustumPlanesId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kFrustumPlanesId", ::GlobalNamespace::SetFrustumPlanesPass*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::SetFrustumPlanesPass::getStaticF_kFrustumPlanesId() {
  return ::cordl_internals::getStaticField<int32_t, "kFrustumPlanesId", ::GlobalNamespace::SetFrustumPlanesPass*>();
}
inline void GlobalNamespace::SetFrustumPlanesPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, bool visualise) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetFrustumPlanesPass*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, visualise);
}
inline void GlobalNamespace::SetFrustumPlanesPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SetFrustumPlanesPass*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline void GlobalNamespace::SetFrustumPlanesPass::ExecutePass(::GlobalNamespace::SetFrustumPlanesPass_PassData* passData, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::SetFrustumPlanesPass*>(),
          { "ExecutePass", {}, { ::i2c::type_of<::GlobalNamespace::SetFrustumPlanesPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, passData, context);
}
inline ::GlobalNamespace::SetFrustumPlanesPass* GlobalNamespace::SetFrustumPlanesPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, bool visualise) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SetFrustumPlanesPass*>(evt, visualise));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetFrustumPlanesPass::SetFrustumPlanesPass() {}
