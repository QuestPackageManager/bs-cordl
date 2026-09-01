#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\UnsafeGenericPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__UnsafeGenericPool_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__ObjectPool_1_def.hpp"
template <typename T> inline void UnityEngine::Rendering::UnsafeGenericPool_1<T>::setStaticF_s_Pool(::UnityEngine::Rendering::ObjectPool_1<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ObjectPool_1<T>*, "s_Pool", ::UnityEngine::Rendering::UnsafeGenericPool_1<T>*>(
      std::forward<::UnityEngine::Rendering::ObjectPool_1<T>*>(value));
}
template <typename T> inline ::UnityEngine::Rendering::ObjectPool_1<T>* UnityEngine::Rendering::UnsafeGenericPool_1<T>::getStaticF_s_Pool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ObjectPool_1<T>*, "s_Pool", ::UnityEngine::Rendering::UnsafeGenericPool_1<T>*>();
}
template <typename T> inline T UnityEngine::Rendering::UnsafeGenericPool_1<T>::Get() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnsafeGenericPool_1<T>*>(), { "Get", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template <typename T> inline ::UnityEngine::Rendering::ObjectPool_1_PooledObject<T> UnityEngine::Rendering::UnsafeGenericPool_1<T>::Get(::by_ref<T> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnsafeGenericPool_1<T>*>(), { "Get", {}, { ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ObjectPool_1_PooledObject<T>>(nullptr, ___internal_method, value);
}
template <typename T> inline void UnityEngine::Rendering::UnsafeGenericPool_1<T>::Release(T toRelease) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnsafeGenericPool_1<T>*>(), { "Release", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, toRelease);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::UnsafeGenericPool_1<T>::UnsafeGenericPool_1() {}
