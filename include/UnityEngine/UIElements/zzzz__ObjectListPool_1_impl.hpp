#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\ObjectListPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ObjectListPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ObjectListPool_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ObjectPool_1_def.hpp"
template <typename T> inline void UnityEngine::UIElements::ObjectListPool_1___c<T>::setStaticF___9(::UnityEngine::UIElements::ObjectListPool_1___c<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::ObjectListPool_1___c<T>*, "<>9", ::UnityEngine::UIElements::ObjectListPool_1___c<T>*>(
      std::forward<::UnityEngine::UIElements::ObjectListPool_1___c<T>*>(value));
}
template <typename T> inline ::UnityEngine::UIElements::ObjectListPool_1___c<T>* UnityEngine::UIElements::ObjectListPool_1___c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::ObjectListPool_1___c<T>*, "<>9", ::UnityEngine::UIElements::ObjectListPool_1___c<T>*>();
}
template <typename T> inline void UnityEngine::UIElements::ObjectListPool_1___c<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ObjectListPool_1___c<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* UnityEngine::UIElements::ObjectListPool_1___c<T>::__cctor_b__4_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ObjectListPool_1___c<T>*>(), { "<.cctor>b__4_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::ObjectListPool_1___c<T>* UnityEngine::UIElements::ObjectListPool_1___c<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ObjectListPool_1___c<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::ObjectListPool_1___c<T>::ObjectListPool_1___c() {}
template <typename T> inline void UnityEngine::UIElements::ObjectListPool_1<T>::setStaticF_pool(::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<T>*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<T>*>*, "pool", ::UnityEngine::UIElements::ObjectListPool_1<T>*>(
      std::forward<::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<T>*>*>(value));
}
template <typename T> inline ::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<T>*>* UnityEngine::UIElements::ObjectListPool_1<T>::getStaticF_pool() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<T>*>*, "pool", ::UnityEngine::UIElements::ObjectListPool_1<T>*>();
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* UnityEngine::UIElements::ObjectListPool_1<T>::Get() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ObjectListPool_1<T>*>(), { "Get", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::ObjectListPool_1<T>::Release(::System::Collections::Generic::List_1<T>* elements) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ObjectListPool_1<T>*>(), { "Release", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, elements);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::ObjectListPool_1<T>::ObjectListPool_1() {}
