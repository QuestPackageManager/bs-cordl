#pragma once
// IWYU pragma private; include "Tayx\Graphy\Utils\G_Singleton_1.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Tayx/Graphy/Utils/zzzz__G_Singleton_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> inline void Tayx::Graphy::Utils::G_Singleton_1<T>::setStaticF__instance(T value) {
  ::cordl_internals::setStaticField<T, "_instance", ::Tayx::Graphy::Utils::G_Singleton_1<T>*>(std::forward<T>(value));
}
template <typename T> inline T Tayx::Graphy::Utils::G_Singleton_1<T>::getStaticF__instance() {
  return ::cordl_internals::getStaticField<T, "_instance", ::Tayx::Graphy::Utils::G_Singleton_1<T>*>();
}
template <typename T> inline void Tayx::Graphy::Utils::G_Singleton_1<T>::setStaticF__lock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "_lock", ::Tayx::Graphy::Utils::G_Singleton_1<T>*>(std::forward<::System::Object*>(value));
}
template <typename T> inline ::System::Object* Tayx::Graphy::Utils::G_Singleton_1<T>::getStaticF__lock() {
  return ::cordl_internals::getStaticField<::System::Object*, "_lock", ::Tayx::Graphy::Utils::G_Singleton_1<T>*>();
}
template <typename T> inline T Tayx::Graphy::Utils::G_Singleton_1<T>::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::G_Singleton_1<T>*>(), { "get_Instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template <typename T> inline void Tayx::Graphy::Utils::G_Singleton_1<T>::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::G_Singleton_1<T>*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void Tayx::Graphy::Utils::G_Singleton_1<T>::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::G_Singleton_1<T>*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void Tayx::Graphy::Utils::G_Singleton_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Utils::G_Singleton_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::Tayx::Graphy::Utils::G_Singleton_1<T>* Tayx::Graphy::Utils::G_Singleton_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tayx::Graphy::Utils::G_Singleton_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::Tayx::Graphy::Utils::G_Singleton_1<T>::G_Singleton_1() {}
