#pragma once
// IWYU pragma private; include "GlobalNamespace/SwitchGameObjectArrayEffectTarget.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_impl.hpp"
#include "GlobalNamespace/zzzz__SwitchGameObjectArrayEffectTarget_def.hpp"
#include "GlobalNamespace/zzzz__SwitchGameObjectArrayEffectTarget_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "threshold", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "gameObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation::SwitchGameObjectArrayEffectTarget_GameObjectActivation(float_t threshold,
                                                                                                                                            ::UnityW<::UnityEngine::GameObject> gameObject) noexcept {
  this->threshold = threshold;
  this->gameObject = gameObject;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation::SwitchGameObjectArrayEffectTarget_GameObjectActivation() {}
//  Writing Method size for method: ::GlobalNamespace::SwitchGameObjectArrayEffectTarget.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SwitchGameObjectArrayEffectTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::SwitchGameObjectArrayEffectTarget::SetValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598fad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SwitchGameObjectArrayEffectTarget*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SwitchGameObjectArrayEffectTarget*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SwitchGameObjectArrayEffectTarget.TriggerValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SwitchGameObjectArrayEffectTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::SwitchGameObjectArrayEffectTarget::TriggerValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598fb84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SwitchGameObjectArrayEffectTarget*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SwitchGameObjectArrayEffectTarget*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SwitchGameObjectArrayEffectTarget.SetFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SwitchGameObjectArrayEffectTarget::*)(float_t)>(&::GlobalNamespace::SwitchGameObjectArrayEffectTarget::SetFloat)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x598fad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SwitchGameObjectArrayEffectTarget*>(), { "SetFloat", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SwitchGameObjectArrayEffectTarget._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SwitchGameObjectArrayEffectTarget::*)()>(&::GlobalNamespace::SwitchGameObjectArrayEffectTarget::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598fb88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SwitchGameObjectArrayEffectTarget*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation>& GlobalNamespace::SwitchGameObjectArrayEffectTarget::__cordl_internal_get_gameObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjects;
}
constexpr ::ArrayW<::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation> const& GlobalNamespace::SwitchGameObjectArrayEffectTarget::__cordl_internal_get_gameObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjects;
}
constexpr void GlobalNamespace::SwitchGameObjectArrayEffectTarget::__cordl_internal_set_gameObjects(::ArrayW<::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameObjects = value;
}
inline void GlobalNamespace::SwitchGameObjectArrayEffectTarget::SetValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SwitchGameObjectArrayEffectTarget*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::SwitchGameObjectArrayEffectTarget::TriggerValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SwitchGameObjectArrayEffectTarget*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::SwitchGameObjectArrayEffectTarget::SetFloat(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SwitchGameObjectArrayEffectTarget*>(), { "SetFloat", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SwitchGameObjectArrayEffectTarget::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SwitchGameObjectArrayEffectTarget*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SwitchGameObjectArrayEffectTarget* GlobalNamespace::SwitchGameObjectArrayEffectTarget::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SwitchGameObjectArrayEffectTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SwitchGameObjectArrayEffectTarget::SwitchGameObjectArrayEffectTarget() {}
