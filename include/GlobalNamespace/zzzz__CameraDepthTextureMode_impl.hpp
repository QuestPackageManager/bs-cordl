#pragma once
// IWYU pragma private; include "GlobalNamespace/CameraDepthTextureMode.hpp"
#include "UnityEngine/zzzz__DepthTextureMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CameraDepthTextureMode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CameraDepthTextureMode.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CameraDepthTextureMode::*)()>(&::GlobalNamespace::CameraDepthTextureMode::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5857a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CameraDepthTextureMode*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraDepthTextureMode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CameraDepthTextureMode::*)()>(&::GlobalNamespace::CameraDepthTextureMode::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5857ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CameraDepthTextureMode*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::DepthTextureMode& GlobalNamespace::CameraDepthTextureMode::__cordl_internal_get__depthTextureMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____depthTextureMode;
}
constexpr ::UnityEngine::DepthTextureMode const& GlobalNamespace::CameraDepthTextureMode::__cordl_internal_get__depthTextureMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____depthTextureMode;
}
constexpr void GlobalNamespace::CameraDepthTextureMode::__cordl_internal_set__depthTextureMode(::UnityEngine::DepthTextureMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____depthTextureMode = value;
}
inline void GlobalNamespace::CameraDepthTextureMode::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CameraDepthTextureMode*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CameraDepthTextureMode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CameraDepthTextureMode*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CameraDepthTextureMode* GlobalNamespace::CameraDepthTextureMode::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CameraDepthTextureMode*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CameraDepthTextureMode::CameraDepthTextureMode() {}
