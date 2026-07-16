#pragma once
// IWYU pragma private; include "GlobalNamespace/MirrorCamera.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MirrorCamera_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePass_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MirrorCamera.SetMainCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorCamera::*)(::UnityEngine::Camera*)>(&::GlobalNamespace::MirrorCamera::SetMainCamera)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5f44944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorCamera*>(), { "SetMainCamera", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorCamera._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirrorCamera::*)()>(&::GlobalNamespace::MirrorCamera::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f44b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorCamera*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::MirrorCamera::__cordl_internal_get__mirrorCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::MirrorCamera::__cordl_internal_get__mirrorCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorCamera;
}
constexpr void GlobalNamespace::MirrorCamera::__cordl_internal_set__mirrorCamera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mirrorCamera = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::MirrorCamera::__cordl_internal_get__mainCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::MirrorCamera::__cordl_internal_get__mainCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainCamera;
}
constexpr void GlobalNamespace::MirrorCamera::__cordl_internal_set__mainCamera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainCamera = value;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePass>& GlobalNamespace::MirrorCamera::__cordl_internal_get__bloomPrePass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePass;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePass> const& GlobalNamespace::MirrorCamera::__cordl_internal_get__bloomPrePass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePass;
}
constexpr void GlobalNamespace::MirrorCamera::__cordl_internal_set__bloomPrePass(::UnityW<::GlobalNamespace::BloomPrePass> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomPrePass = value;
}
inline void GlobalNamespace::MirrorCamera::SetMainCamera(::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorCamera*>(), { "SetMainCamera", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void GlobalNamespace::MirrorCamera::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirrorCamera*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MirrorCamera* GlobalNamespace::MirrorCamera::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MirrorCamera*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MirrorCamera::MirrorCamera() {}
