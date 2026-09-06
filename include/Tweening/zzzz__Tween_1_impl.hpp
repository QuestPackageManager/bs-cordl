#pragma once
// IWYU pragma private; include "Tweening/Tween_1.hpp"
#include "Tweening/zzzz__Tween_impl.hpp"
#include "Tweening/zzzz__Tween_1_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
template <typename T> constexpr T& Tweening::Tween_1<T>::__cordl_internal_get_fromValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fromValue;
}
template <typename T> constexpr T const& Tweening::Tween_1<T>::__cordl_internal_get_fromValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fromValue;
}
template <typename T> constexpr void Tweening::Tween_1<T>::__cordl_internal_set_fromValue(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fromValue = value;
}
template <typename T> constexpr T& Tweening::Tween_1<T>::__cordl_internal_get_toValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toValue;
}
template <typename T> constexpr T const& Tweening::Tween_1<T>::__cordl_internal_get_toValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toValue;
}
template <typename T> constexpr void Tweening::Tween_1<T>::__cordl_internal_set_toValue(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___toValue = value;
}
template <typename T> constexpr ::System::Action_1<T>*& Tweening::Tween_1<T>::__cordl_internal_get_onUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onUpdate;
}
template <typename T> constexpr ::System::Action_1<T>* const& Tweening::Tween_1<T>::__cordl_internal_get_onUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onUpdate;
}
template <typename T> constexpr void Tweening::Tween_1<T>::__cordl_internal_set_onUpdate(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onUpdate = value;
}
template <typename T>
inline void Tweening::Tween_1<T>::OnSpawned(T fromValue, T toValue, ::System::Action_1<T>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay, ::Tweening::Tween_1<T>* t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Tweening::Tween_1<T>*>(), { "OnSpawned",
                                                                        {},
                                                                        { ::i2c::type_of<T>(), ::i2c::type_of<T>(), ::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<float_t>(),
                                                                          ::i2c::type_of<::GlobalNamespace::EaseType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Tweening::Tween_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fromValue, toValue, onUpdate, duration, easeType, delay, t);
}
template <typename T> inline void Tweening::Tween_1<T>::OnDespawned(::Tweening::Tween_1<T>* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::Tween_1<T>*>(), { "OnDespawned", {}, { ::i2c::type_of<::Tweening::Tween_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t);
}
template <typename T> inline void Tweening::Tween_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::Tween_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void Tweening::Tween_1<T>::_ctor(T fromValue, T toValue, ::System::Action_1<T>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Tweening::Tween_1<T>*>(), { ".ctor",
                                                                                     {},
                                                                                     { ::i2c::type_of<T>(), ::i2c::type_of<T>(), ::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<float_t>(),
                                                                                       ::i2c::type_of<::GlobalNamespace::EaseType>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromValue, toValue, onUpdate, duration, easeType, delay);
}
template <typename T> inline void Tweening::Tween_1<T>::_ctor(T fromValue, T toValue, ::System::Action_1<T>* onUpdate, float_t duration, ::UnityEngine::AnimationCurve* animationCurve, float_t delay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Tweening::Tween_1<T>*>(), { ".ctor",
                                                                                     {},
                                                                                     { ::i2c::type_of<T>(), ::i2c::type_of<T>(), ::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<float_t>(),
                                                                                       ::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromValue, toValue, onUpdate, duration, animationCurve, delay);
}
template <typename T> inline void Tweening::Tween_1<T>::Init(T fromValue, T toValue, ::System::Action_1<T>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Tweening::Tween_1<T>*>(), { "Init",
                                                                                     {},
                                                                                     { ::i2c::type_of<T>(), ::i2c::type_of<T>(), ::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<float_t>(),
                                                                                       ::i2c::type_of<::GlobalNamespace::EaseType>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromValue, toValue, onUpdate, duration, easeType, delay);
}
template <typename T> inline void Tweening::Tween_1<T>::Update(float_t currentTime) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Tweening::Tween_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTime);
}
template <typename T> inline void Tweening::Tween_1<T>::Sample(float_t t) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Tweening::Tween_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
template <typename T> inline void Tweening::Tween_1<T>::ForceOnUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::Tween_1<T>*>(), { "ForceOnUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline T Tweening::Tween_1<T>::GetValue(float_t t) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Tweening::Tween_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, t);
}
template <typename T> inline ::Tweening::Tween_1<T>* Tweening::Tween_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tweening::Tween_1<T>*>());
}
template <typename T>
inline ::Tweening::Tween_1<T>* Tweening::Tween_1<T>::New_ctor(T fromValue, T toValue, ::System::Action_1<T>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tweening::Tween_1<T>*>(fromValue, toValue, onUpdate, duration, easeType, delay));
}
template <typename T>
inline ::Tweening::Tween_1<T>* Tweening::Tween_1<T>::New_ctor(T fromValue, T toValue, ::System::Action_1<T>* onUpdate, float_t duration, ::UnityEngine::AnimationCurve* animationCurve, float_t delay) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tweening::Tween_1<T>*>(fromValue, toValue, onUpdate, duration, animationCurve, delay));
}
// Ctor Parameters []
template <typename T> constexpr ::Tweening::Tween_1<T>::Tween_1() {}
