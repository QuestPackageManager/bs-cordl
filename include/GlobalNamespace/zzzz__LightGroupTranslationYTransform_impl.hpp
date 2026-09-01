#pragma once
// IWYU pragma private; include "GlobalNamespace\LightGroupTranslationYTransform.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupTranslationYTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightGroupTranslationYTransform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightGroupTranslationYTransform::*)()>(&::GlobalNamespace::LightGroupTranslationYTransform::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x599a5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupTranslationYTransform*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LightGroupTranslationYTransform::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupTranslationYTransform*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightGroupTranslationYTransform* GlobalNamespace::LightGroupTranslationYTransform::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightGroupTranslationYTransform*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightGroupTranslationYTransform::LightGroupTranslationYTransform() {}
