#pragma once
// IWYU pragma private; include "GlobalNamespace/ScreenDisplacementEffectGrabPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "GlobalNamespace/zzzz__ScreenDisplacementEffectGrabPass_def.hpp"
#include "GlobalNamespace/zzzz__ScreenDisplacementEffectGrabPass_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData::*)()>(
    &::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d99864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData::__cordl_internal_get_activeColorTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeColorTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData::__cordl_internal_get_activeColorTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeColorTexture;
}
constexpr void GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData::__cordl_internal_set_activeColorTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___activeColorTexture = value;
}
inline void GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData* GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData::ScreenDisplacementEffectGrabPass_PassData() {}
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectGrabPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectGrabPass::*)(::UnityEngine::Shader*)>(
    &::GlobalNamespace::ScreenDisplacementEffectGrabPass::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5d98d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectGrabPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectGrabPass.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectGrabPass::*)()>(
    &::GlobalNamespace::ScreenDisplacementEffectGrabPass::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d98f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectGrabPass*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectGrabPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectGrabPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::GlobalNamespace::ScreenDisplacementEffectGrabPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x618;
  constexpr static std::size_t addrs = 0x5d99094;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectGrabPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectGrabPass*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectGrabPass.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectGrabPass::*)(
    ::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(&::GlobalNamespace::ScreenDisplacementEffectGrabPass::Render)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5d996ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectGrabPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::ScreenDisplacementEffectGrabPass::__cordl_internal_get__blitMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blitMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::ScreenDisplacementEffectGrabPass::__cordl_internal_get__blitMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blitMaterial;
}
constexpr void GlobalNamespace::ScreenDisplacementEffectGrabPass::__cordl_internal_set__blitMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____blitMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ScreenDisplacementEffectGrabPass::_ctor(::UnityEngine::Shader* blitShader) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectGrabPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, blitShader);
}
inline void GlobalNamespace::ScreenDisplacementEffectGrabPass::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectGrabPass*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ScreenDisplacementEffectGrabPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                 ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectGrabPass*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, frameData);
}
inline void GlobalNamespace::ScreenDisplacementEffectGrabPass::Render(::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData* data,
                                                                      ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectGrabPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline ::GlobalNamespace::ScreenDisplacementEffectGrabPass* GlobalNamespace::ScreenDisplacementEffectGrabPass::New_ctor(::UnityEngine::Shader* blitShader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ScreenDisplacementEffectGrabPass*>(blitShader));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::ScreenDisplacementEffectGrabPass::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ScreenDisplacementEffectGrabPass::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScreenDisplacementEffectGrabPass::ScreenDisplacementEffectGrabPass() {}
