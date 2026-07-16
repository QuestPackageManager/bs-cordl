#pragma once
// IWYU pragma private; include "GlobalNamespace/LightGroupRotationZTransform.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupRotationZTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightGroupRotationZTransform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightGroupRotationZTransform::*)()>(&::GlobalNamespace::LightGroupRotationZTransform::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5992b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupRotationZTransform*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LightGroupRotationZTransform::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupRotationZTransform*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightGroupRotationZTransform* GlobalNamespace::LightGroupRotationZTransform::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightGroupRotationZTransform*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightGroupRotationZTransform::LightGroupRotationZTransform() {}
