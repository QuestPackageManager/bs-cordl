#pragma once
// IWYU pragma private; include "GlobalNamespace\BaseTransitionSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BaseTransitionSO_def.hpp"
#include "GlobalNamespace/zzzz__TransitionTimingSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BaseTransitionSO.GetTransitionTiming
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::TransitionTimingSO> (::GlobalNamespace::BaseTransitionSO::*)()>(
    &::GlobalNamespace::BaseTransitionSO::GetTransitionTiming)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x644698c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseTransitionSO*>(), { "GetTransitionTiming", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseTransitionSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseTransitionSO::*)()>(&::GlobalNamespace::BaseTransitionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6446994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseTransitionSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TransitionTimingSO>& GlobalNamespace::BaseTransitionSO::__cordl_internal_get__transitionTiming() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transitionTiming;
}
constexpr ::UnityW<::GlobalNamespace::TransitionTimingSO> const& GlobalNamespace::BaseTransitionSO::__cordl_internal_get__transitionTiming() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transitionTiming;
}
constexpr void GlobalNamespace::BaseTransitionSO::__cordl_internal_set__transitionTiming(::UnityW<::GlobalNamespace::TransitionTimingSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transitionTiming = value;
}
inline ::UnityW<::GlobalNamespace::TransitionTimingSO> GlobalNamespace::BaseTransitionSO::GetTransitionTiming() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseTransitionSO*>(), { "GetTransitionTiming", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::TransitionTimingSO>>(this, ___internal_method);
}
inline void GlobalNamespace::BaseTransitionSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseTransitionSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BaseTransitionSO* GlobalNamespace::BaseTransitionSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BaseTransitionSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BaseTransitionSO::BaseTransitionSO() {}
