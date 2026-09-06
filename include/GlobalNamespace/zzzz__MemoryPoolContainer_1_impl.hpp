#pragma once
// IWYU pragma private; include "GlobalNamespace/MemoryPoolContainer_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MemoryPoolContainer_1_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_1_def.hpp"
template <typename T> constexpr ::GlobalNamespace::LazyCopyHashSet_1<T>*& GlobalNamespace::MemoryPoolContainer_1<T>::__cordl_internal_get__activeItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeItems;
}
template <typename T> constexpr ::GlobalNamespace::LazyCopyHashSet_1<T>* const& GlobalNamespace::MemoryPoolContainer_1<T>::__cordl_internal_get__activeItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeItems;
}
template <typename T> constexpr void GlobalNamespace::MemoryPoolContainer_1<T>::__cordl_internal_set__activeItems(::GlobalNamespace::LazyCopyHashSet_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeItems = value;
}
template <typename T> constexpr ::Zenject::IMemoryPool_1<T>*& GlobalNamespace::MemoryPoolContainer_1<T>::__cordl_internal_get__memoryPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____memoryPool;
}
template <typename T> constexpr ::Zenject::IMemoryPool_1<T>* const& GlobalNamespace::MemoryPoolContainer_1<T>::__cordl_internal_get__memoryPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____memoryPool;
}
template <typename T> constexpr void GlobalNamespace::MemoryPoolContainer_1<T>::__cordl_internal_set__memoryPool(::Zenject::IMemoryPool_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____memoryPool = value;
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* GlobalNamespace::MemoryPoolContainer_1<T>::get_activeItems() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MemoryPoolContainer_1<T>*>(), { "get_activeItems", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::MemoryPoolContainer_1<T>::_ctor(::Zenject::IMemoryPool_1<T>* memoryPool) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MemoryPoolContainer_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::IMemoryPool_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memoryPool);
}
template <typename T> inline T GlobalNamespace::MemoryPoolContainer_1<T>::Spawn() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MemoryPoolContainer_1<T>*>(), { "Spawn", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::MemoryPoolContainer_1<T>::Despawn(T item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MemoryPoolContainer_1<T>*>(), { "Despawn", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename T> inline void GlobalNamespace::MemoryPoolContainer_1<T>::DespawnAll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MemoryPoolContainer_1<T>*>(), { "DespawnAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::MemoryPoolContainer_1<T>::DestroyAll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MemoryPoolContainer_1<T>*>(), { "DestroyAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::MemoryPoolContainer_1<T>* GlobalNamespace::MemoryPoolContainer_1<T>::New_ctor(::Zenject::IMemoryPool_1<T>* memoryPool) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MemoryPoolContainer_1<T>*>(memoryPool));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::MemoryPoolContainer_1<T>::MemoryPoolContainer_1() {}
