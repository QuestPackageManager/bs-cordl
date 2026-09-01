#pragma once
// IWYU pragma private; include "GlobalNamespace\GaussianSeparableBlurRendererSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__GaussianSeparableBlurRendererSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GaussianSeparableBlurRendererSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GaussianSeparableBlurRendererSO::*)()>(&::GlobalNamespace::GaussianSeparableBlurRendererSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58696f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GaussianSeparableBlurRendererSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GaussianSeparableBlurRendererSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GaussianSeparableBlurRendererSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GaussianSeparableBlurRendererSO* GlobalNamespace::GaussianSeparableBlurRendererSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GaussianSeparableBlurRendererSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GaussianSeparableBlurRendererSO::GaussianSeparableBlurRendererSO() {}
