#pragma once
// IWYU pragma private; include "GlobalNamespace\FloatFxGroupEffectCollectionTarget.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_impl.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectCollectionTarget_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroupEffectCollectionTarget.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatFxGroupEffectCollectionTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::FloatFxGroupEffectCollectionTarget::SetValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5995340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxGroupEffectCollectionTarget*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::FloatFxGroupEffectCollectionTarget*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroupEffectCollectionTarget.TriggerValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatFxGroupEffectCollectionTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::FloatFxGroupEffectCollectionTarget::TriggerValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x59953c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxGroupEffectCollectionTarget*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::FloatFxGroupEffectCollectionTarget*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroupEffectCollectionTarget._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatFxGroupEffectCollectionTarget::*)()>(&::GlobalNamespace::FloatFxGroupEffectCollectionTarget::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5995440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxGroupEffectCollectionTarget*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>& GlobalNamespace::FloatFxGroupEffectCollectionTarget::__cordl_internal_get__floatFxGroupEffectTargets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFxGroupEffectTargets;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>> const& GlobalNamespace::FloatFxGroupEffectCollectionTarget::__cordl_internal_get__floatFxGroupEffectTargets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFxGroupEffectTargets;
}
constexpr void GlobalNamespace::FloatFxGroupEffectCollectionTarget::__cordl_internal_set__floatFxGroupEffectTargets(::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floatFxGroupEffectTargets = value;
}
inline void GlobalNamespace::FloatFxGroupEffectCollectionTarget::SetValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FloatFxGroupEffectCollectionTarget*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::FloatFxGroupEffectCollectionTarget::TriggerValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FloatFxGroupEffectCollectionTarget*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::FloatFxGroupEffectCollectionTarget::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxGroupEffectCollectionTarget*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FloatFxGroupEffectCollectionTarget* GlobalNamespace::FloatFxGroupEffectCollectionTarget::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FloatFxGroupEffectCollectionTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatFxGroupEffectCollectionTarget::FloatFxGroupEffectCollectionTarget() {}
