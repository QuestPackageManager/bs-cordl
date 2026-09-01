#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\Util\ComponentSingleton_1.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ComponentSingleton_1_def.hpp"
template <typename T> inline void UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::setStaticF_s_Instance(T value) {
  ::cordl_internals::setStaticField<T, "s_Instance", ::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>*>(std::forward<T>(value));
}
template <typename T> inline T UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<T, "s_Instance", ::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>*>();
}
template <typename T> inline bool UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::get_Exists() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>*>(), { "get_Exists", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
template <typename T> inline T UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::get_Instance() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>*>(), { "get_Instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template <typename T> inline T UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::FindInstance() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>*>(), { "FindInstance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template <typename T> inline ::StringW UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::GetGameObjectName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::CreateNewSingleton() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>*>(), { "CreateNewSingleton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template <typename T> inline void UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::DestroySingleton() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>*>(), { "DestroySingleton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template <typename T> inline void UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>* UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>::ComponentSingleton_1() {}
