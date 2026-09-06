#pragma once
// IWYU pragma private; include "UnityEngine/Pool/GenericPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Pool/zzzz__GenericPool_1_def.hpp"
#include "UnityEngine/Pool/zzzz__GenericPool_1_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/Pool/zzzz__PooledObject_1_def.hpp"
template <typename T> inline void UnityEngine::Pool::GenericPool_1___c<T>::setStaticF___9(::UnityEngine::Pool::GenericPool_1___c<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::GenericPool_1___c<T>*, "<>9", ::UnityEngine::Pool::GenericPool_1___c<T>*>(std::forward<::UnityEngine::Pool::GenericPool_1___c<T>*>(value));
}
template <typename T> inline ::UnityEngine::Pool::GenericPool_1___c<T>* UnityEngine::Pool::GenericPool_1___c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pool::GenericPool_1___c<T>*, "<>9", ::UnityEngine::Pool::GenericPool_1___c<T>*>();
}
template <typename T> inline void UnityEngine::Pool::GenericPool_1___c<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Pool::GenericPool_1___c<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::Pool::GenericPool_1___c<T>::__cctor_b__5_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Pool::GenericPool_1___c<T>*>(), { "<.cctor>b__5_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Pool::GenericPool_1___c<T>* UnityEngine::Pool::GenericPool_1___c<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Pool::GenericPool_1___c<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Pool::GenericPool_1___c<T>::GenericPool_1___c() {}
template <typename T> inline void UnityEngine::Pool::GenericPool_1<T>::setStaticF_s_Pool(::UnityEngine::Pool::ObjectPool_1<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<T>*, "s_Pool", ::UnityEngine::Pool::GenericPool_1<T>*>(std::forward<::UnityEngine::Pool::ObjectPool_1<T>*>(value));
}
template <typename T> inline ::UnityEngine::Pool::ObjectPool_1<T>* UnityEngine::Pool::GenericPool_1<T>::getStaticF_s_Pool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<T>*, "s_Pool", ::UnityEngine::Pool::GenericPool_1<T>*>();
}
template <typename T> inline T UnityEngine::Pool::GenericPool_1<T>::Get() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Pool::GenericPool_1<T>*>(), { "Get", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template <typename T> inline ::UnityEngine::Pool::PooledObject_1<T> UnityEngine::Pool::GenericPool_1<T>::Get(::by_ref<T> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Pool::GenericPool_1<T>*>(), { "Get", {}, { ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pool::PooledObject_1<T>>(nullptr, ___internal_method, value);
}
template <typename T> inline void UnityEngine::Pool::GenericPool_1<T>::Release(T toRelease) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Pool::GenericPool_1<T>*>(), { "Release", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, toRelease);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Pool::GenericPool_1<T>::GenericPool_1() {}
