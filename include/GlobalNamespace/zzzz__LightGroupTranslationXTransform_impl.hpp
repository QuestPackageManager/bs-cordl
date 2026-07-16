#pragma once
// IWYU pragma private; include "GlobalNamespace/LightGroupTranslationXTransform.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupTranslationXTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightGroupTranslationXTransform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightGroupTranslationXTransform::*)()>(&::GlobalNamespace::LightGroupTranslationXTransform::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5992bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupTranslationXTransform*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LightGroupTranslationXTransform::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupTranslationXTransform*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightGroupTranslationXTransform* GlobalNamespace::LightGroupTranslationXTransform::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightGroupTranslationXTransform*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightGroupTranslationXTransform::LightGroupTranslationXTransform() {}
