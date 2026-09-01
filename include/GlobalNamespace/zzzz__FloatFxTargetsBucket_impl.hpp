#pragma once
// IWYU pragma private; include "GlobalNamespace\FloatFxTargetsBucket.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FloatFxTargetsBucket_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloatFxTargetsBucket.get_targets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>> (::GlobalNamespace::FloatFxTargetsBucket::*)()>(
    &::GlobalNamespace::FloatFxTargetsBucket::get_targets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59931f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxTargetsBucket*>(), { "get_targets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxTargetsBucket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatFxTargetsBucket::*)()>(&::GlobalNamespace::FloatFxTargetsBucket::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5993200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxTargetsBucket*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>& GlobalNamespace::FloatFxTargetsBucket::__cordl_internal_get__targets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targets;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>> const& GlobalNamespace::FloatFxTargetsBucket::__cordl_internal_get__targets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targets;
}
constexpr void GlobalNamespace::FloatFxTargetsBucket::__cordl_internal_set__targets(::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targets = value;
}
inline ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>> GlobalNamespace::FloatFxTargetsBucket::get_targets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxTargetsBucket*>(), { "get_targets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>>(this, ___internal_method);
}
inline void GlobalNamespace::FloatFxTargetsBucket::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxTargetsBucket*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FloatFxTargetsBucket* GlobalNamespace::FloatFxTargetsBucket::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FloatFxTargetsBucket*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatFxTargetsBucket::FloatFxTargetsBucket() {}
