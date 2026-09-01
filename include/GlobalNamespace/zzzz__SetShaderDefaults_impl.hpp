#pragma once
// IWYU pragma private; include "GlobalNamespace\SetShaderDefaults.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "GlobalNamespace/zzzz__SetShaderDefaults_def.hpp"
#include "GlobalNamespace/zzzz__SetShaderDefaultsPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SetShaderDefaults.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetShaderDefaults::*)()>(&::GlobalNamespace::SetShaderDefaults::Create)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f4e8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetShaderDefaults*>(), { ::i2c::class_of<::GlobalNamespace::SetShaderDefaults*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetShaderDefaults.AddRenderPasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetShaderDefaults::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::GlobalNamespace::SetShaderDefaults::AddRenderPasses)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f4e9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetShaderDefaults*>(), { ::i2c::class_of<::GlobalNamespace::SetShaderDefaults*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetShaderDefaults._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetShaderDefaults::*)()>(&::GlobalNamespace::SetShaderDefaults::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f4e9c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetShaderDefaults*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SetShaderDefaultsPass*& GlobalNamespace::SetShaderDefaults::__cordl_internal_get__pass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pass;
}
constexpr ::GlobalNamespace::SetShaderDefaultsPass* const& GlobalNamespace::SetShaderDefaults::__cordl_internal_get__pass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pass;
}
constexpr void GlobalNamespace::SetShaderDefaults::__cordl_internal_set__pass(::GlobalNamespace::SetShaderDefaultsPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pass = value;
}
inline void GlobalNamespace::SetShaderDefaults::Create() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SetShaderDefaults*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SetShaderDefaults::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SetShaderDefaults*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, renderingData);
}
inline void GlobalNamespace::SetShaderDefaults::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetShaderDefaults*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SetShaderDefaults* GlobalNamespace::SetShaderDefaults::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SetShaderDefaults*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetShaderDefaults::SetShaderDefaults() {}
