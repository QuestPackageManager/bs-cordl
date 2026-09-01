#pragma once
// IWYU pragma private; include "GlobalNamespace\SetFrustumPlanes.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "GlobalNamespace/zzzz__SetFrustumPlanes_def.hpp"
#include "GlobalNamespace/zzzz__SetFrustumPlanesPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SetFrustumPlanes.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetFrustumPlanes::*)()>(&::GlobalNamespace::SetFrustumPlanes::Create)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f4e01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetFrustumPlanes*>(), { ::i2c::class_of<::GlobalNamespace::SetFrustumPlanes*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetFrustumPlanes.AddRenderPasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetFrustumPlanes::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::GlobalNamespace::SetFrustumPlanes::AddRenderPasses)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f4e0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetFrustumPlanes*>(), { ::i2c::class_of<::GlobalNamespace::SetFrustumPlanes*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetFrustumPlanes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetFrustumPlanes::*)()>(&::GlobalNamespace::SetFrustumPlanes::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f4e11c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetFrustumPlanes*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::SetFrustumPlanes::__cordl_internal_get_Visualise() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Visualise;
}
constexpr bool const& GlobalNamespace::SetFrustumPlanes::__cordl_internal_get_Visualise() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Visualise;
}
constexpr void GlobalNamespace::SetFrustumPlanes::__cordl_internal_set_Visualise(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Visualise = value;
}
constexpr ::GlobalNamespace::SetFrustumPlanesPass*& GlobalNamespace::SetFrustumPlanes::__cordl_internal_get__pass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pass;
}
constexpr ::GlobalNamespace::SetFrustumPlanesPass* const& GlobalNamespace::SetFrustumPlanes::__cordl_internal_get__pass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pass;
}
constexpr void GlobalNamespace::SetFrustumPlanes::__cordl_internal_set__pass(::GlobalNamespace::SetFrustumPlanesPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pass = value;
}
inline void GlobalNamespace::SetFrustumPlanes::Create() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SetFrustumPlanes*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SetFrustumPlanes::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                               ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SetFrustumPlanes*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, renderingData);
}
inline void GlobalNamespace::SetFrustumPlanes::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetFrustumPlanes*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SetFrustumPlanes* GlobalNamespace::SetFrustumPlanes::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SetFrustumPlanes*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetFrustumPlanes::SetFrustumPlanes() {}
