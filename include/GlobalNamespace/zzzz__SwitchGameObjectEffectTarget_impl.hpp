#pragma once
// IWYU pragma private; include "GlobalNamespace/SwitchGameObjectEffectTarget.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_impl.hpp"
#include "GlobalNamespace/zzzz__SwitchGameObjectEffectTarget_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SwitchGameObjectEffectTarget.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SwitchGameObjectEffectTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::SwitchGameObjectEffectTarget::SetValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598fb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SwitchGameObjectEffectTarget*>(), { ::i2c::class_of<::GlobalNamespace::SwitchGameObjectEffectTarget*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SwitchGameObjectEffectTarget.TriggerValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SwitchGameObjectEffectTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::SwitchGameObjectEffectTarget::TriggerValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598fc68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SwitchGameObjectEffectTarget*>(), { ::i2c::class_of<::GlobalNamespace::SwitchGameObjectEffectTarget*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SwitchGameObjectEffectTarget.SetFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SwitchGameObjectEffectTarget::*)(float_t)>(&::GlobalNamespace::SwitchGameObjectEffectTarget::SetFloat)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x598fb90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SwitchGameObjectEffectTarget*>(), { "SetFloat", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SwitchGameObjectEffectTarget._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SwitchGameObjectEffectTarget::*)()>(&::GlobalNamespace::SwitchGameObjectEffectTarget::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598fc6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SwitchGameObjectEffectTarget*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SwitchGameObjectEffectTarget::__cordl_internal_get__gameObject01() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObject01;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SwitchGameObjectEffectTarget::__cordl_internal_get__gameObject01() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObject01;
}
constexpr void GlobalNamespace::SwitchGameObjectEffectTarget::__cordl_internal_set__gameObject01(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameObject01 = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SwitchGameObjectEffectTarget::__cordl_internal_get__gameObject02() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObject02;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SwitchGameObjectEffectTarget::__cordl_internal_get__gameObject02() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObject02;
}
constexpr void GlobalNamespace::SwitchGameObjectEffectTarget::__cordl_internal_set__gameObject02(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameObject02 = value;
}
inline void GlobalNamespace::SwitchGameObjectEffectTarget::SetValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SwitchGameObjectEffectTarget*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::SwitchGameObjectEffectTarget::TriggerValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SwitchGameObjectEffectTarget*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::SwitchGameObjectEffectTarget::SetFloat(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SwitchGameObjectEffectTarget*>(), { "SetFloat", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SwitchGameObjectEffectTarget::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SwitchGameObjectEffectTarget*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SwitchGameObjectEffectTarget* GlobalNamespace::SwitchGameObjectEffectTarget::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SwitchGameObjectEffectTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SwitchGameObjectEffectTarget::SwitchGameObjectEffectTarget() {}
