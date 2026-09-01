#pragma once
// IWYU pragma private; include "GlobalNamespace\LightGroupTranslationZTransform.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupTranslationZTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightGroupTranslationZTransform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightGroupTranslationZTransform::*)()>(&::GlobalNamespace::LightGroupTranslationZTransform::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x599a5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupTranslationZTransform*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LightGroupTranslationZTransform::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupTranslationZTransform*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightGroupTranslationZTransform* GlobalNamespace::LightGroupTranslationZTransform::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightGroupTranslationZTransform*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightGroupTranslationZTransform::LightGroupTranslationZTransform() {}
