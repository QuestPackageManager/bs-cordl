#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/URPSelectionPickerPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__URPSelectionPickerPass_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__URPSelectionPickerPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData::*)()>(&::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b0da88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& UnityEngine::ProBuilder::URPSelectionPickerPass_PassData::__cordl_internal_get_rendererListHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererListHandle;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& UnityEngine::ProBuilder::URPSelectionPickerPass_PassData::__cordl_internal_get_rendererListHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererListHandle;
}
constexpr void UnityEngine::ProBuilder::URPSelectionPickerPass_PassData::__cordl_internal_set_rendererListHandle(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rendererListHandle = value;
}
inline void UnityEngine::ProBuilder::URPSelectionPickerPass_PassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData* UnityEngine::ProBuilder::URPSelectionPickerPass_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData::URPSelectionPickerPass_PassData() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::URPSelectionPickerPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::URPSelectionPickerPass___c::*)()>(&::UnityEngine::ProBuilder::URPSelectionPickerPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b0dae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::URPSelectionPickerPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::URPSelectionPickerPass___c._RecordRenderGraph_b__5_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::URPSelectionPickerPass___c::*)(::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData*,
                                                                                                                       ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::ProBuilder::URPSelectionPickerPass___c::_RecordRenderGraph_b__5_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b0dae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::URPSelectionPickerPass___c*>(),
                            { "<RecordRenderGraph>b__5_0",
                              {},
                              { ::i2c::type_of<::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::URPSelectionPickerPass___c::setStaticF___9(::UnityEngine::ProBuilder::URPSelectionPickerPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::URPSelectionPickerPass___c*, "<>9", ::UnityEngine::ProBuilder::URPSelectionPickerPass___c*>(
      std::forward<::UnityEngine::ProBuilder::URPSelectionPickerPass___c*>(value));
}
inline ::UnityEngine::ProBuilder::URPSelectionPickerPass___c* UnityEngine::ProBuilder::URPSelectionPickerPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::URPSelectionPickerPass___c*, "<>9", ::UnityEngine::ProBuilder::URPSelectionPickerPass___c*>();
}
inline void UnityEngine::ProBuilder::URPSelectionPickerPass___c::setStaticF___9__5_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
        value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__5_0", ::UnityEngine::ProBuilder::URPSelectionPickerPass___c*>(
      std::forward<
          ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(
          value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::ProBuilder::URPSelectionPickerPass___c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__5_0", ::UnityEngine::ProBuilder::URPSelectionPickerPass___c*>();
}
inline void UnityEngine::ProBuilder::URPSelectionPickerPass___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::URPSelectionPickerPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::URPSelectionPickerPass___c::_RecordRenderGraph_b__5_0(::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData* data,
                                                                                           ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::URPSelectionPickerPass___c*>(),
                          { "<RecordRenderGraph>b__5_0",
                            {},
                            { ::i2c::type_of<::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::UnityEngine::ProBuilder::URPSelectionPickerPass___c* UnityEngine::ProBuilder::URPSelectionPickerPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::URPSelectionPickerPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::URPSelectionPickerPass___c::URPSelectionPickerPass___c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::URPSelectionPickerPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::URPSelectionPickerPass::*)(::UnityEngine::LayerMask)>(
    &::UnityEngine::ProBuilder::URPSelectionPickerPass::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6afb710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::URPSelectionPickerPass*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::URPSelectionPickerPass.InitRendererLists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::URPSelectionPickerPass::*)(
    ::UnityEngine::Rendering::ContextContainer*, ::by_ref<::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData*>, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*)>(
    &::UnityEngine::ProBuilder::URPSelectionPickerPass::InitRendererLists)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x6b0d0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::URPSelectionPickerPass*>(),
                                         { "InitRendererLists",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(), ::i2c::type_of<::by_ref<::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData*>>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::URPSelectionPickerPass.ExecutePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::ProBuilder::URPSelectionPickerPass::ExecutePass)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b0d504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::URPSelectionPickerPass*>(),
                            { "ExecutePass",
                              {},
                              { ::i2c::type_of<::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::URPSelectionPickerPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::URPSelectionPickerPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::UnityEngine::ProBuilder::URPSelectionPickerPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x6b0d580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::URPSelectionPickerPass*>(), { ::i2c::class_of<::UnityEngine::ProBuilder::URPSelectionPickerPass*>(), 11 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*& UnityEngine::ProBuilder::URPSelectionPickerPass::__cordl_internal_get_m_ShaderTagIdList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderTagIdList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* const& UnityEngine::ProBuilder::URPSelectionPickerPass::__cordl_internal_get_m_ShaderTagIdList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderTagIdList;
}
constexpr void UnityEngine::ProBuilder::URPSelectionPickerPass::__cordl_internal_set_m_ShaderTagIdList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShaderTagIdList = value;
}
inline void UnityEngine::ProBuilder::URPSelectionPickerPass::_ctor(::UnityEngine::LayerMask layerMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::URPSelectionPickerPass*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layerMask);
}
inline void UnityEngine::ProBuilder::URPSelectionPickerPass::InitRendererLists(::UnityEngine::Rendering::ContextContainer* frameData,
                                                                               ::by_ref<::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData*> passData,
                                                                               ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::URPSelectionPickerPass*>(),
                                       { "InitRendererLists",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(), ::i2c::type_of<::by_ref<::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData*>>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frameData, passData, renderGraph);
}
inline void UnityEngine::ProBuilder::URPSelectionPickerPass::ExecutePass(::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData* data,
                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::URPSelectionPickerPass*>(),
                          { "ExecutePass",
                            {},
                            { ::i2c::type_of<::UnityEngine::ProBuilder::URPSelectionPickerPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, context);
}
inline void UnityEngine::ProBuilder::URPSelectionPickerPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                               ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::URPSelectionPickerPass*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline ::UnityEngine::ProBuilder::URPSelectionPickerPass* UnityEngine::ProBuilder::URPSelectionPickerPass::New_ctor(::UnityEngine::LayerMask layerMask) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::URPSelectionPickerPass*>(layerMask));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::URPSelectionPickerPass::URPSelectionPickerPass() {}
