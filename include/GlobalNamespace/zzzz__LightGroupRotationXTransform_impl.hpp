#pragma once
// IWYU pragma private; include "GlobalNamespace/LightGroupRotationXTransform.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupRotationXTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightGroupRotationXTransform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightGroupRotationXTransform::*)()>(&::GlobalNamespace::LightGroupRotationXTransform::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5992b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupRotationXTransform*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LightGroupRotationXTransform::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupRotationXTransform*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightGroupRotationXTransform* GlobalNamespace::LightGroupRotationXTransform::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightGroupRotationXTransform*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightGroupRotationXTransform::LightGroupRotationXTransform() {}
