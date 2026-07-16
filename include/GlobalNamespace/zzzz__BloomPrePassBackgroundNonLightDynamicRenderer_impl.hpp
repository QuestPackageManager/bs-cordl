#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassBackgroundNonLightDynamicRenderer.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightRendererCore_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightDynamicRenderer_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer.get_renderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Renderer> (::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::get_renderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5862938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::OnEnable)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5862940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer.SetRenderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::*)(::UnityEngine::Renderer*)>(
    &::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::SetRenderer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5862ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer*>(), { "SetRenderer", {}, { ::i2c::type_of<::UnityEngine::Renderer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5862c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::__cordl_internal_get__renderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::__cordl_internal_get__renderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderer;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::__cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderer = value;
}
inline ::UnityW<::UnityEngine::Renderer> GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::get_renderer() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Renderer>>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::SetRenderer(::UnityEngine::Renderer* renderer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer*>(), { "SetRenderer", {}, { ::i2c::type_of<::UnityEngine::Renderer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer);
}
inline void GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer* GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassBackgroundNonLightDynamicRenderer::BloomPrePassBackgroundNonLightDynamicRenderer() {}
