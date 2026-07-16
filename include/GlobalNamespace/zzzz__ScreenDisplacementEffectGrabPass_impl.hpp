#pragma once
// IWYU pragma private; include "GlobalNamespace/ScreenDisplacementEffectGrabPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "GlobalNamespace/zzzz__ScreenDisplacementEffectGrabPass_def.hpp"
#include "GlobalNamespace/zzzz__ScreenDisplacementEffectGrabPass_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData::*)()>(
    &::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f47a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData::__cordl_internal_get_blitMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blitMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData::__cordl_internal_get_blitMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blitMaterial;
}
constexpr void GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData::__cordl_internal_set_blitMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blitMaterial = value;
}
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData* GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData::ScreenDisplacementEffectGrabPass_PassData() {}
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectGrabPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectGrabPass___c::*)()>(&::GlobalNamespace::ScreenDisplacementEffectGrabPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f47aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectGrabPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectGrabPass___c._RecordRenderGraph_b__4_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectGrabPass___c::*)(::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData*,
                                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::GlobalNamespace::ScreenDisplacementEffectGrabPass___c::_RecordRenderGraph_b__4_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f47aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectGrabPass___c*>(),
                                                                                           { "<RecordRenderGraph>b__4_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ScreenDisplacementEffectGrabPass___c::setStaticF___9(::GlobalNamespace::ScreenDisplacementEffectGrabPass___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::ScreenDisplacementEffectGrabPass___c*, "<>9", ::GlobalNamespace::ScreenDisplacementEffectGrabPass___c*>(
      std::forward<::GlobalNamespace::ScreenDisplacementEffectGrabPass___c*>(value));
}
inline ::GlobalNamespace::ScreenDisplacementEffectGrabPass___c* GlobalNamespace::ScreenDisplacementEffectGrabPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::ScreenDisplacementEffectGrabPass___c*, "<>9", ::GlobalNamespace::ScreenDisplacementEffectGrabPass___c*>();
}
inline void GlobalNamespace::ScreenDisplacementEffectGrabPass___c::setStaticF___9__4_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
        value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__4_0", ::GlobalNamespace::ScreenDisplacementEffectGrabPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
GlobalNamespace::ScreenDisplacementEffectGrabPass___c::getStaticF___9__4_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__4_0", ::GlobalNamespace::ScreenDisplacementEffectGrabPass___c*>();
}
inline void GlobalNamespace::ScreenDisplacementEffectGrabPass___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectGrabPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScreenDisplacementEffectGrabPass___c::_RecordRenderGraph_b__4_0(::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData* data,
                                                                                             ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectGrabPass___c*>(),
                          { "<RecordRenderGraph>b__4_0",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::GlobalNamespace::ScreenDisplacementEffectGrabPass___c* GlobalNamespace::ScreenDisplacementEffectGrabPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScreenDisplacementEffectGrabPass___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScreenDisplacementEffectGrabPass___c::ScreenDisplacementEffectGrabPass___c() {}
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectGrabPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectGrabPass::*)(::UnityEngine::Shader*)>(
    &::GlobalNamespace::ScreenDisplacementEffectGrabPass::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f46c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectGrabPass*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectGrabPass.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectGrabPass::*)()>(&::GlobalNamespace::ScreenDisplacementEffectGrabPass::Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f46ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectGrabPass*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectGrabPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectGrabPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::GlobalNamespace::ScreenDisplacementEffectGrabPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x6e4;
  constexpr static std::size_t addrs = 0x5f47108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectGrabPass*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectGrabPass*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectGrabPass.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::GlobalNamespace::ScreenDisplacementEffectGrabPass::Render)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5f477ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectGrabPass*>(),
            { "Render", {}, { ::i2c::type_of<::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
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
  this->____blitMaterial = value;
}
inline void GlobalNamespace::ScreenDisplacementEffectGrabPass::setStaticF__profilingSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "_profilingSampler", ::GlobalNamespace::ScreenDisplacementEffectGrabPass*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* GlobalNamespace::ScreenDisplacementEffectGrabPass::getStaticF__profilingSampler() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "_profilingSampler", ::GlobalNamespace::ScreenDisplacementEffectGrabPass*>();
}
inline void GlobalNamespace::ScreenDisplacementEffectGrabPass::_ctor(::UnityEngine::Shader* blitShader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectGrabPass*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, blitShader);
}
inline void GlobalNamespace::ScreenDisplacementEffectGrabPass::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectGrabPass*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScreenDisplacementEffectGrabPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                 ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectGrabPass*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline void GlobalNamespace::ScreenDisplacementEffectGrabPass::Render(::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData* data,
                                                                      ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::ScreenDisplacementEffectGrabPass*>(),
          { "Render", {}, { ::i2c::type_of<::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, context);
}
inline ::GlobalNamespace::ScreenDisplacementEffectGrabPass* GlobalNamespace::ScreenDisplacementEffectGrabPass::New_ctor(::UnityEngine::Shader* blitShader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScreenDisplacementEffectGrabPass*>(blitShader));
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
