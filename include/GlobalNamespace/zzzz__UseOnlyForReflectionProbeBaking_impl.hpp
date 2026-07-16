#pragma once
// IWYU pragma private; include "GlobalNamespace/UseOnlyForReflectionProbeBaking.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__UseOnlyForReflectionProbeBaking_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UseOnlyForReflectionProbeBaking.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UseOnlyForReflectionProbeBaking::*)()>(&::GlobalNamespace::UseOnlyForReflectionProbeBaking::Awake)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58e2e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UseOnlyForReflectionProbeBaking*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UseOnlyForReflectionProbeBaking._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UseOnlyForReflectionProbeBaking::*)()>(&::GlobalNamespace::UseOnlyForReflectionProbeBaking::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58e2eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UseOnlyForReflectionProbeBaking*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UseOnlyForReflectionProbeBaking::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UseOnlyForReflectionProbeBaking*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UseOnlyForReflectionProbeBaking::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UseOnlyForReflectionProbeBaking*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UseOnlyForReflectionProbeBaking* GlobalNamespace::UseOnlyForReflectionProbeBaking::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UseOnlyForReflectionProbeBaking*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UseOnlyForReflectionProbeBaking::UseOnlyForReflectionProbeBaking() {}
