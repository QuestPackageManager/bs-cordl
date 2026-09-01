#pragma once
// IWYU pragma private; include "GlobalNamespace\MemoryPoolContainer_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MemoryPoolContainer_2_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_1_def.hpp"
template <typename T0, typename T1> constexpr ::GlobalNamespace::LazyCopyHashSet_1<T1>*& GlobalNamespace::MemoryPoolContainer_2<T0, T1>::__cordl_internal_get__activeItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeItems;
}
template <typename T0, typename T1> constexpr ::GlobalNamespace::LazyCopyHashSet_1<T1>* const& GlobalNamespace::MemoryPoolContainer_2<T0, T1>::__cordl_internal_get__activeItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeItems;
}
template <typename T0, typename T1> constexpr void GlobalNamespace::MemoryPoolContainer_2<T0, T1>::__cordl_internal_set__activeItems(::GlobalNamespace::LazyCopyHashSet_1<T1>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeItems = value;
}
template <typename T0, typename T1> constexpr ::Zenject::IMemoryPool_1<T0>*& GlobalNamespace::MemoryPoolContainer_2<T0, T1>::__cordl_internal_get__memoryPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____memoryPool;
}
template <typename T0, typename T1> constexpr ::Zenject::IMemoryPool_1<T0>* const& GlobalNamespace::MemoryPoolContainer_2<T0, T1>::__cordl_internal_get__memoryPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____memoryPool;
}
template <typename T0, typename T1> constexpr void GlobalNamespace::MemoryPoolContainer_2<T0, T1>::__cordl_internal_set__memoryPool(::Zenject::IMemoryPool_1<T0>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____memoryPool = value;
}
template <typename T0, typename T1> inline ::System::Collections::Generic::List_1<T1>* GlobalNamespace::MemoryPoolContainer_2<T0, T1>::get_activeItems() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MemoryPoolContainer_2<T0, T1>*>(), { "get_activeItems", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T1>*>(this, ___internal_method);
}
template <typename T0, typename T1> inline void GlobalNamespace::MemoryPoolContainer_2<T0, T1>::_ctor(::Zenject::IMemoryPool_1<T0>* memoryPool) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MemoryPoolContainer_2<T0, T1>*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::IMemoryPool_1<T0>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memoryPool);
}
template <typename T0, typename T1> inline T0 GlobalNamespace::MemoryPoolContainer_2<T0, T1>::Spawn() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MemoryPoolContainer_2<T0, T1>*>(), { "Spawn", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T0>(this, ___internal_method);
}
template <typename T0, typename T1> inline void GlobalNamespace::MemoryPoolContainer_2<T0, T1>::Despawn(T0 item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MemoryPoolContainer_2<T0, T1>*>(), { "Despawn", {}, { ::i2c::type_of<T0>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename T0, typename T1> inline void GlobalNamespace::MemoryPoolContainer_2<T0, T1>::DespawnAll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MemoryPoolContainer_2<T0, T1>*>(), { "DespawnAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T0, typename T1> inline void GlobalNamespace::MemoryPoolContainer_2<T0, T1>::DestroyAll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MemoryPoolContainer_2<T0, T1>*>(), { "DestroyAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T0, typename T1> inline ::GlobalNamespace::MemoryPoolContainer_2<T0, T1>* GlobalNamespace::MemoryPoolContainer_2<T0, T1>::New_ctor(::Zenject::IMemoryPool_1<T0>* memoryPool) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MemoryPoolContainer_2<T0, T1>*>(memoryPool));
}
// Ctor Parameters []
template <typename T0, typename T1> constexpr ::GlobalNamespace::MemoryPoolContainer_2<T0, T1>::MemoryPoolContainer_2() {}
