#pragma once
// IWYU pragma private; include "GlobalNamespace/ScreenDisplacementEffectDrawPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "GlobalNamespace/zzzz__ScreenDisplacementEffectDrawPass_def.hpp"
#include "GlobalNamespace/zzzz__ScreenDisplacementEffectDrawPass_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData::*)()>(
    &::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d9a518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData::__cordl_internal_get_rendererListHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererListHandle;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData::__cordl_internal_get_rendererListHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererListHandle;
}
constexpr void GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData::__cordl_internal_set_rendererListHandle(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rendererListHandle = value;
}
inline void GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData* GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData::ScreenDisplacementEffectDrawPass_PassData() {}
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectDrawPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectDrawPass::*)(::UnityEngine::LayerMask)>(
    &::GlobalNamespace::ScreenDisplacementEffectDrawPass::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5d98e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectDrawPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectDrawPass.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectDrawPass::*)()>(
    &::GlobalNamespace::ScreenDisplacementEffectDrawPass::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d98f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectDrawPass*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectDrawPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectDrawPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::GlobalNamespace::ScreenDisplacementEffectDrawPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x9dc;
  constexpr static std::size_t addrs = 0x5d99868;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectDrawPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectDrawPass*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectDrawPass.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectDrawPass::*)(
    ::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(&::GlobalNamespace::ScreenDisplacementEffectDrawPass::Render)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5d9a244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectDrawPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LayerMask& GlobalNamespace::ScreenDisplacementEffectDrawPass::__cordl_internal_get__layerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::ScreenDisplacementEffectDrawPass::__cordl_internal_get__layerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layerMask;
}
constexpr void GlobalNamespace::ScreenDisplacementEffectDrawPass::__cordl_internal_set__layerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____layerMask = value;
}
inline void GlobalNamespace::ScreenDisplacementEffectDrawPass::setStaticF__shaderTagIdList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*, "_shaderTagIdList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectDrawPass*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* GlobalNamespace::ScreenDisplacementEffectDrawPass::getStaticF__shaderTagIdList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*, "_shaderTagIdList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectDrawPass*>::get>();
}
inline void GlobalNamespace::ScreenDisplacementEffectDrawPass::_ctor(::UnityEngine::LayerMask layerMask) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectDrawPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, layerMask);
}
inline void GlobalNamespace::ScreenDisplacementEffectDrawPass::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectDrawPass*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ScreenDisplacementEffectDrawPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                 ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectDrawPass*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, frameData);
}
inline void GlobalNamespace::ScreenDisplacementEffectDrawPass::Render(::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData* data,
                                                                      ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectDrawPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline ::GlobalNamespace::ScreenDisplacementEffectDrawPass* GlobalNamespace::ScreenDisplacementEffectDrawPass::New_ctor(::UnityEngine::LayerMask layerMask) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ScreenDisplacementEffectDrawPass*>(layerMask));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::ScreenDisplacementEffectDrawPass::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ScreenDisplacementEffectDrawPass::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScreenDisplacementEffectDrawPass::ScreenDisplacementEffectDrawPass() {}
