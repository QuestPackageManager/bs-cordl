#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialPropertyBlockLocalScaleAnimator.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockAnimator_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockLocalScaleAnimator_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockLocalScaleAnimator.SetProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockLocalScaleAnimator::*)()>(
    &::GlobalNamespace::MaterialPropertyBlockLocalScaleAnimator::SetProperty)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5874638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockLocalScaleAnimator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockLocalScaleAnimator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockLocalScaleAnimator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockLocalScaleAnimator::*)()>(&::GlobalNamespace::MaterialPropertyBlockLocalScaleAnimator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x587468c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockLocalScaleAnimator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MaterialPropertyBlockLocalScaleAnimator::__cordl_internal_get__targetTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MaterialPropertyBlockLocalScaleAnimator::__cordl_internal_get__targetTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetTransform;
}
constexpr void GlobalNamespace::MaterialPropertyBlockLocalScaleAnimator::__cordl_internal_set__targetTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetTransform = value;
}
inline void GlobalNamespace::MaterialPropertyBlockLocalScaleAnimator::SetProperty() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockLocalScaleAnimator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyBlockLocalScaleAnimator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockLocalScaleAnimator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialPropertyBlockLocalScaleAnimator* GlobalNamespace::MaterialPropertyBlockLocalScaleAnimator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MaterialPropertyBlockLocalScaleAnimator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialPropertyBlockLocalScaleAnimator::MaterialPropertyBlockLocalScaleAnimator() {}
