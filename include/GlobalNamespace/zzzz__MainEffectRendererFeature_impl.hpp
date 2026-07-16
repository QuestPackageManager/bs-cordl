#pragma once
// IWYU pragma private; include "GlobalNamespace/MainEffectRendererFeature.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "GlobalNamespace/zzzz__MainEffectRendererFeature_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectPostRenderPass_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectPreRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainEffectRendererFeature.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectRendererFeature::*)()>(&::GlobalNamespace::MainEffectRendererFeature::Create)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f41340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectRendererFeature*>(), { ::i2c::class_of<::GlobalNamespace::MainEffectRendererFeature*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectRendererFeature.AddRenderPasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectRendererFeature::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::GlobalNamespace::MainEffectRendererFeature::AddRenderPasses)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5f414b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectRendererFeature*>(), { ::i2c::class_of<::GlobalNamespace::MainEffectRendererFeature*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectRendererFeature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectRendererFeature::*)()>(&::GlobalNamespace::MainEffectRendererFeature::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f414f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectRendererFeature*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MainEffectPreRenderPass*& GlobalNamespace::MainEffectRendererFeature::__cordl_internal_get__preRenderPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preRenderPass;
}
constexpr ::GlobalNamespace::MainEffectPreRenderPass* const& GlobalNamespace::MainEffectRendererFeature::__cordl_internal_get__preRenderPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preRenderPass;
}
constexpr void GlobalNamespace::MainEffectRendererFeature::__cordl_internal_set__preRenderPass(::GlobalNamespace::MainEffectPreRenderPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____preRenderPass = value;
}
constexpr ::GlobalNamespace::MainEffectPostRenderPass*& GlobalNamespace::MainEffectRendererFeature::__cordl_internal_get__postRenderPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____postRenderPass;
}
constexpr ::GlobalNamespace::MainEffectPostRenderPass* const& GlobalNamespace::MainEffectRendererFeature::__cordl_internal_get__postRenderPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____postRenderPass;
}
constexpr void GlobalNamespace::MainEffectRendererFeature::__cordl_internal_set__postRenderPass(::GlobalNamespace::MainEffectPostRenderPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____postRenderPass = value;
}
inline void GlobalNamespace::MainEffectRendererFeature::Create() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainEffectRendererFeature*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainEffectRendererFeature::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                        ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainEffectRendererFeature*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, renderingData);
}
inline void GlobalNamespace::MainEffectRendererFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectRendererFeature*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MainEffectRendererFeature* GlobalNamespace::MainEffectRendererFeature::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainEffectRendererFeature*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainEffectRendererFeature::MainEffectRendererFeature() {}
