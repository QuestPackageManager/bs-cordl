#pragma once
// IWYU pragma private; include "GlobalNamespace\IgnoreForReflectionProbeBaking.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__IgnoreForReflectionProbeBaking_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IgnoreForReflectionProbeBaking._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IgnoreForReflectionProbeBaking::*)()>(&::GlobalNamespace::IgnoreForReflectionProbeBaking::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58e44ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IgnoreForReflectionProbeBaking*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IgnoreForReflectionProbeBaking::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IgnoreForReflectionProbeBaking*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::IgnoreForReflectionProbeBaking* GlobalNamespace::IgnoreForReflectionProbeBaking::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::IgnoreForReflectionProbeBaking*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IgnoreForReflectionProbeBaking::IgnoreForReflectionProbeBaking() {}
