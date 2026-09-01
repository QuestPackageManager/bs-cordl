#pragma once
// IWYU pragma private; include "Zenject\HashSetPool_1.hpp"
#include "Zenject/zzzz__StaticMemoryPool_1_impl.hpp"
#include "Zenject/zzzz__HashSetPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
template <typename T> inline void Zenject::HashSetPool_1<T>::setStaticF__instance(::Zenject::HashSetPool_1<T>* value) {
  ::cordl_internals::setStaticField<::Zenject::HashSetPool_1<T>*, "_instance", ::Zenject::HashSetPool_1<T>*>(std::forward<::Zenject::HashSetPool_1<T>*>(value));
}
template <typename T> inline ::Zenject::HashSetPool_1<T>* Zenject::HashSetPool_1<T>::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::Zenject::HashSetPool_1<T>*, "_instance", ::Zenject::HashSetPool_1<T>*>();
}
template <typename T> inline void Zenject::HashSetPool_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::HashSetPool_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::Zenject::HashSetPool_1<T>* Zenject::HashSetPool_1<T>::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::HashSetPool_1<T>*>(), { "get_Instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::HashSetPool_1<T>*>(nullptr, ___internal_method);
}
template <typename T> inline void Zenject::HashSetPool_1<T>::OnSpawned(::System::Collections::Generic::HashSet_1<T>* items) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::HashSetPool_1<T>*>(), { "OnSpawned", {}, { ::i2c::type_of<::System::Collections::Generic::HashSet_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, items);
}
template <typename T> inline void Zenject::HashSetPool_1<T>::OnDespawned(::System::Collections::Generic::HashSet_1<T>* items) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::HashSetPool_1<T>*>(), { "OnDespawned", {}, { ::i2c::type_of<::System::Collections::Generic::HashSet_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, items);
}
template <typename T> inline ::Zenject::HashSetPool_1<T>* Zenject::HashSetPool_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::HashSetPool_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::Zenject::HashSetPool_1<T>::HashSetPool_1() {}
