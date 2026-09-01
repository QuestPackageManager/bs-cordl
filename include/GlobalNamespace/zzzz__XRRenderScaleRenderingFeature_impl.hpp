#pragma once
// IWYU pragma private; include "GlobalNamespace\XRRenderScaleRenderingFeature.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "GlobalNamespace/zzzz__XRRenderScaleRenderingFeature_def.hpp"
#include "GlobalNamespace/zzzz__XRRenderScaleRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XRRenderScaleRenderingFeature.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XRRenderScaleRenderingFeature::*)()>(&::GlobalNamespace::XRRenderScaleRenderingFeature::Create)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f52bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XRRenderScaleRenderingFeature*>(), { ::i2c::class_of<::GlobalNamespace::XRRenderScaleRenderingFeature*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XRRenderScaleRenderingFeature.AddRenderPasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XRRenderScaleRenderingFeature::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::GlobalNamespace::XRRenderScaleRenderingFeature::AddRenderPasses)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f52c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::XRRenderScaleRenderingFeature*>(), { ::i2c::class_of<::GlobalNamespace::XRRenderScaleRenderingFeature*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XRRenderScaleRenderingFeature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XRRenderScaleRenderingFeature::*)()>(&::GlobalNamespace::XRRenderScaleRenderingFeature::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f52ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::XRRenderScaleRenderingFeature*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::XRRenderScaleRenderPass*& GlobalNamespace::XRRenderScaleRenderingFeature::__cordl_internal_get__pass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pass;
}
constexpr ::GlobalNamespace::XRRenderScaleRenderPass* const& GlobalNamespace::XRRenderScaleRenderingFeature::__cordl_internal_get__pass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pass;
}
constexpr void GlobalNamespace::XRRenderScaleRenderingFeature::__cordl_internal_set__pass(::GlobalNamespace::XRRenderScaleRenderPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pass = value;
}
inline void GlobalNamespace::XRRenderScaleRenderingFeature::Create() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XRRenderScaleRenderingFeature*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::XRRenderScaleRenderingFeature::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                            ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::XRRenderScaleRenderingFeature*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, renderingData);
}
inline void GlobalNamespace::XRRenderScaleRenderingFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::XRRenderScaleRenderingFeature*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::XRRenderScaleRenderingFeature* GlobalNamespace::XRRenderScaleRenderingFeature::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::XRRenderScaleRenderingFeature*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XRRenderScaleRenderingFeature::XRRenderScaleRenderingFeature() {}
