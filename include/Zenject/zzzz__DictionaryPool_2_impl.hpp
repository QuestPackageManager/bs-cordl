#pragma once
// IWYU pragma private; include "Zenject\DictionaryPool_2.hpp"
#include "Zenject/zzzz__StaticMemoryPool_1_impl.hpp"
#include "Zenject/zzzz__DictionaryPool_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
template <typename TKey, typename TValue> inline void Zenject::DictionaryPool_2<TKey, TValue>::setStaticF__instance(::Zenject::DictionaryPool_2<TKey, TValue>* value) {
  ::cordl_internals::setStaticField<::Zenject::DictionaryPool_2<TKey, TValue>*, "_instance", ::Zenject::DictionaryPool_2<TKey, TValue>*>(
      std::forward<::Zenject::DictionaryPool_2<TKey, TValue>*>(value));
}
template <typename TKey, typename TValue> inline ::Zenject::DictionaryPool_2<TKey, TValue>* Zenject::DictionaryPool_2<TKey, TValue>::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::Zenject::DictionaryPool_2<TKey, TValue>*, "_instance", ::Zenject::DictionaryPool_2<TKey, TValue>*>();
}
template <typename TKey, typename TValue> inline void Zenject::DictionaryPool_2<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DictionaryPool_2<TKey, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::Zenject::DictionaryPool_2<TKey, TValue>* Zenject::DictionaryPool_2<TKey, TValue>::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DictionaryPool_2<TKey, TValue>*>(), { "get_Instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DictionaryPool_2<TKey, TValue>*>(nullptr, ___internal_method);
}
template <typename TKey, typename TValue> inline void Zenject::DictionaryPool_2<TKey, TValue>::OnSpawned(::System::Collections::Generic::Dictionary_2<TKey, TValue>* items) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DictionaryPool_2<TKey, TValue>*>(),
                                                                                         { "OnSpawned", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, items);
}
template <typename TKey, typename TValue> inline void Zenject::DictionaryPool_2<TKey, TValue>::OnDespawned(::System::Collections::Generic::Dictionary_2<TKey, TValue>* items) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DictionaryPool_2<TKey, TValue>*>(),
                                                                                         { "OnDespawned", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, items);
}
template <typename TKey, typename TValue> inline ::Zenject::DictionaryPool_2<TKey, TValue>* Zenject::DictionaryPool_2<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::DictionaryPool_2<TKey, TValue>*>());
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::Zenject::DictionaryPool_2<TKey, TValue>::DictionaryPool_2() {}
