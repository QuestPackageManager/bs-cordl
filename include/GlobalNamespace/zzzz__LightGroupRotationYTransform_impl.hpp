#pragma once
// IWYU pragma private; include "GlobalNamespace\LightGroupRotationYTransform.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupRotationYTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightGroupRotationYTransform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightGroupRotationYTransform::*)()>(&::GlobalNamespace::LightGroupRotationYTransform::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x599a53c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupRotationYTransform*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LightGroupRotationYTransform::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupRotationYTransform*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightGroupRotationYTransform* GlobalNamespace::LightGroupRotationYTransform::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightGroupRotationYTransform*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightGroupRotationYTransform::LightGroupRotationYTransform() {}
