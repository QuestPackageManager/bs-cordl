#pragma once
// IWYU pragma private; include "GlobalNamespace\PlanarMirrorRenderPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_impl.hpp"
#include "GlobalNamespace/zzzz__PlanarMirrorRenderPass_def.hpp"
#include "GlobalNamespace/zzzz__MirrorFrameData_def.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__PlanarMirrorRenderPass_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlanarMirrorRenderPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlanarMirrorRenderPass_PassData::*)()>(&::GlobalNamespace::PlanarMirrorRenderPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4af0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlanarMirrorRenderPass_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MirrorFrameData*& GlobalNamespace::PlanarMirrorRenderPass_PassData::__cordl_internal_get_mirrorFrameData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorFrameData;
}
constexpr ::GlobalNamespace::MirrorFrameData* const& GlobalNamespace::PlanarMirrorRenderPass_PassData::__cordl_internal_get_mirrorFrameData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorFrameData;
}
constexpr void GlobalNamespace::PlanarMirrorRenderPass_PassData::__cordl_internal_set_mirrorFrameData(::GlobalNamespace::MirrorFrameData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mirrorFrameData = value;
}
constexpr ::UnityEngine::Experimental::Rendering::XRPass*& GlobalNamespace::PlanarMirrorRenderPass_PassData::__cordl_internal_get_xr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xr;
}
constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& GlobalNamespace::PlanarMirrorRenderPass_PassData::__cordl_internal_get_xr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xr;
}
constexpr void GlobalNamespace::PlanarMirrorRenderPass_PassData::__cordl_internal_set_xr(::UnityEngine::Experimental::Rendering::XRPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xr = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& GlobalNamespace::PlanarMirrorRenderPass_PassData::__cordl_internal_get_opaqueList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opaqueList;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& GlobalNamespace::PlanarMirrorRenderPass_PassData::__cordl_internal_get_opaqueList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opaqueList;
}
constexpr void GlobalNamespace::PlanarMirrorRenderPass_PassData::__cordl_internal_set_opaqueList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___opaqueList = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& GlobalNamespace::PlanarMirrorRenderPass_PassData::__cordl_internal_get_transparentList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transparentList;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& GlobalNamespace::PlanarMirrorRenderPass_PassData::__cordl_internal_get_transparentList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transparentList;
}
constexpr void GlobalNamespace::PlanarMirrorRenderPass_PassData::__cordl_internal_set_transparentList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___transparentList = value;
}
inline void GlobalNamespace::PlanarMirrorRenderPass_PassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlanarMirrorRenderPass_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlanarMirrorRenderPass_PassData* GlobalNamespace::PlanarMirrorRenderPass_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlanarMirrorRenderPass_PassData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlanarMirrorRenderPass_PassData::PlanarMirrorRenderPass_PassData() {}
//  Writing Method size for method: ::GlobalNamespace::PlanarMirrorRenderPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlanarMirrorRenderPass___c::*)()>(&::GlobalNamespace::PlanarMirrorRenderPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4af64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlanarMirrorRenderPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlanarMirrorRenderPass___c._RecordRenderGraph_b__9_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlanarMirrorRenderPass___c::*)(
    ::GlobalNamespace::PlanarMirrorRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(&::GlobalNamespace::PlanarMirrorRenderPass___c::_RecordRenderGraph_b__9_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f4af68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlanarMirrorRenderPass___c*>(),
                            { "<RecordRenderGraph>b__9_0",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::PlanarMirrorRenderPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlanarMirrorRenderPass___c::setStaticF___9(::GlobalNamespace::PlanarMirrorRenderPass___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::PlanarMirrorRenderPass___c*, "<>9", ::GlobalNamespace::PlanarMirrorRenderPass___c*>(
      std::forward<::GlobalNamespace::PlanarMirrorRenderPass___c*>(value));
}
inline ::GlobalNamespace::PlanarMirrorRenderPass___c* GlobalNamespace::PlanarMirrorRenderPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::PlanarMirrorRenderPass___c*, "<>9", ::GlobalNamespace::PlanarMirrorRenderPass___c*>();
}
inline void GlobalNamespace::PlanarMirrorRenderPass___c::setStaticF___9__9_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::PlanarMirrorRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::PlanarMirrorRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__9_0",
      ::GlobalNamespace::PlanarMirrorRenderPass___c*>(
      std::forward<
          ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::PlanarMirrorRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::PlanarMirrorRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
GlobalNamespace::PlanarMirrorRenderPass___c::getStaticF___9__9_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::PlanarMirrorRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__9_0",
      ::GlobalNamespace::PlanarMirrorRenderPass___c*>();
}
inline void GlobalNamespace::PlanarMirrorRenderPass___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlanarMirrorRenderPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlanarMirrorRenderPass___c::_RecordRenderGraph_b__9_0(::GlobalNamespace::PlanarMirrorRenderPass_PassData* data,
                                                                                   ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlanarMirrorRenderPass___c*>(),
                          { "<RecordRenderGraph>b__9_0",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::PlanarMirrorRenderPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::GlobalNamespace::PlanarMirrorRenderPass___c* GlobalNamespace::PlanarMirrorRenderPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlanarMirrorRenderPass___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlanarMirrorRenderPass___c::PlanarMirrorRenderPass___c() {}
//  Writing Method size for method: ::GlobalNamespace::PlanarMirrorRenderPass.set_cullResults
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlanarMirrorRenderPass::*)(::UnityEngine::Rendering::CullingResults)>(
    &::GlobalNamespace::PlanarMirrorRenderPass::set_cullResults)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f49bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlanarMirrorRenderPass*>(), { "set_cullResults", {}, { ::i2c::type_of<::UnityEngine::Rendering::CullingResults>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlanarMirrorRenderPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlanarMirrorRenderPass::*)(::UnityEngine::Rendering::Universal::RenderPassEvent, ::GlobalNamespace::MirrorRendererSO*)>(
    &::GlobalNamespace::PlanarMirrorRenderPass::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f48e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlanarMirrorRenderPass*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::GlobalNamespace::MirrorRendererSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlanarMirrorRenderPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlanarMirrorRenderPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::GlobalNamespace::PlanarMirrorRenderPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0xf0c;
  constexpr static std::size_t addrs = 0x5f49bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlanarMirrorRenderPass*>(), { ::i2c::class_of<::GlobalNamespace::PlanarMirrorRenderPass*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlanarMirrorRenderPass.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PlanarMirrorRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::GlobalNamespace::PlanarMirrorRenderPass::Render)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5f4ab04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::PlanarMirrorRenderPass*>(),
            { "Render", {}, { ::i2c::type_of<::GlobalNamespace::PlanarMirrorRenderPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO>& GlobalNamespace::PlanarMirrorRenderPass::__cordl_internal_get__mirrorRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRenderer;
}
constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO> const& GlobalNamespace::PlanarMirrorRenderPass::__cordl_internal_get__mirrorRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRenderer;
}
constexpr void GlobalNamespace::PlanarMirrorRenderPass::__cordl_internal_set__mirrorRenderer(::UnityW<::GlobalNamespace::MirrorRendererSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mirrorRenderer = value;
}
constexpr ::UnityEngine::Rendering::CullingResults& GlobalNamespace::PlanarMirrorRenderPass::__cordl_internal_get__cullResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cullResults;
}
constexpr ::UnityEngine::Rendering::CullingResults const& GlobalNamespace::PlanarMirrorRenderPass::__cordl_internal_get__cullResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cullResults;
}
constexpr void GlobalNamespace::PlanarMirrorRenderPass::__cordl_internal_set__cullResults(::UnityEngine::Rendering::CullingResults value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cullResults = value;
}
inline void GlobalNamespace::PlanarMirrorRenderPass::setStaticF__reflectionTexId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_reflectionTexId", ::GlobalNamespace::PlanarMirrorRenderPass*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PlanarMirrorRenderPass::getStaticF__reflectionTexId() {
  return ::cordl_internals::getStaticField<int32_t, "_reflectionTexId", ::GlobalNamespace::PlanarMirrorRenderPass*>();
}
inline void GlobalNamespace::PlanarMirrorRenderPass::setStaticF__profilingSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "_profilingSampler", ::GlobalNamespace::PlanarMirrorRenderPass*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* GlobalNamespace::PlanarMirrorRenderPass::getStaticF__profilingSampler() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "_profilingSampler", ::GlobalNamespace::PlanarMirrorRenderPass*>();
}
inline void GlobalNamespace::PlanarMirrorRenderPass::setStaticF__shaderTagIds(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*, "_shaderTagIds", ::GlobalNamespace::PlanarMirrorRenderPass*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* GlobalNamespace::PlanarMirrorRenderPass::getStaticF__shaderTagIds() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*, "_shaderTagIds", ::GlobalNamespace::PlanarMirrorRenderPass*>();
}
inline void GlobalNamespace::PlanarMirrorRenderPass::set_cullResults(::UnityEngine::Rendering::CullingResults value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlanarMirrorRenderPass*>(), { "set_cullResults", {}, { ::i2c::type_of<::UnityEngine::Rendering::CullingResults>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlanarMirrorRenderPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent, ::GlobalNamespace::MirrorRendererSO* mirrorRenderer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlanarMirrorRenderPass*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::GlobalNamespace::MirrorRendererSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderPassEvent, mirrorRenderer);
}
inline void GlobalNamespace::PlanarMirrorRenderPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlanarMirrorRenderPass*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline void GlobalNamespace::PlanarMirrorRenderPass::Render(::GlobalNamespace::PlanarMirrorRenderPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::PlanarMirrorRenderPass*>(),
          { "Render", {}, { ::i2c::type_of<::GlobalNamespace::PlanarMirrorRenderPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, context);
}
inline ::GlobalNamespace::PlanarMirrorRenderPass* GlobalNamespace::PlanarMirrorRenderPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent,
                                                                                                    ::GlobalNamespace::MirrorRendererSO* mirrorRenderer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlanarMirrorRenderPass*>(renderPassEvent, mirrorRenderer));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlanarMirrorRenderPass::PlanarMirrorRenderPass() {}
