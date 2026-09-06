#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/HashSetPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__HashSetPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__HashSetPool_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__ObjectPool_1_def.hpp"
template <typename T> inline void UnityEngine::Rendering::HashSetPool_1___c<T>::setStaticF___9(::UnityEngine::Rendering::HashSetPool_1___c<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::HashSetPool_1___c<T>*, "<>9", ::UnityEngine::Rendering::HashSetPool_1___c<T>*>(
      std::forward<::UnityEngine::Rendering::HashSetPool_1___c<T>*>(value));
}
template <typename T> inline ::UnityEngine::Rendering::HashSetPool_1___c<T>* UnityEngine::Rendering::HashSetPool_1___c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::HashSetPool_1___c<T>*, "<>9", ::UnityEngine::Rendering::HashSetPool_1___c<T>*>();
}
template <typename T> inline void UnityEngine::Rendering::HashSetPool_1___c<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::HashSetPool_1___c<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::HashSetPool_1___c<T>::__cctor_b__4_0(::System::Collections::Generic::HashSet_1<T>* l) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::HashSetPool_1___c<T>*>(),
                                                                                         { "<.cctor>b__4_0", {}, { ::i2c::type_of<::System::Collections::Generic::HashSet_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, l);
}
template <typename T> inline ::UnityEngine::Rendering::HashSetPool_1___c<T>* UnityEngine::Rendering::HashSetPool_1___c<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::HashSetPool_1___c<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::HashSetPool_1___c<T>::HashSetPool_1___c() {}
template <typename T> inline void UnityEngine::Rendering::HashSetPool_1<T>::setStaticF_s_Pool(::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::HashSet_1<T>*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::HashSet_1<T>*>*, "s_Pool", ::UnityEngine::Rendering::HashSetPool_1<T>*>(
      std::forward<::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::HashSet_1<T>*>*>(value));
}
template <typename T> inline ::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::HashSet_1<T>*>* UnityEngine::Rendering::HashSetPool_1<T>::getStaticF_s_Pool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::HashSet_1<T>*>*, "s_Pool", ::UnityEngine::Rendering::HashSetPool_1<T>*>();
}
template <typename T> inline ::System::Collections::Generic::HashSet_1<T>* UnityEngine::Rendering::HashSetPool_1<T>::Get() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::HashSetPool_1<T>*>(), { "Get", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<T>*>(nullptr, ___internal_method);
}
template <typename T>
inline ::UnityEngine::Rendering::ObjectPool_1_PooledObject<::System::Collections::Generic::HashSet_1<T>*>
UnityEngine::Rendering::HashSetPool_1<T>::Get(::by_ref<::System::Collections::Generic::HashSet_1<T>*> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::HashSetPool_1<T>*>(), { "Get", {}, { ::i2c::type_of<::by_ref<::System::Collections::Generic::HashSet_1<T>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ObjectPool_1_PooledObject<::System::Collections::Generic::HashSet_1<T>*>>(nullptr, ___internal_method, value);
}
template <typename T> inline void UnityEngine::Rendering::HashSetPool_1<T>::Release(::System::Collections::Generic::HashSet_1<T>* toRelease) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::HashSetPool_1<T>*>(), { "Release", {}, { ::i2c::type_of<::System::Collections::Generic::HashSet_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, toRelease);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::HashSetPool_1<T>::HashSetPool_1() {}
