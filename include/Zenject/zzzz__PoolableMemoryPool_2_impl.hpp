#pragma once
// IWYU pragma private; include "Zenject\PoolableMemoryPool_2.hpp"
#include "Zenject/zzzz__MemoryPool_2_impl.hpp"
#include "Zenject/zzzz__PoolableMemoryPool_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TParam1, typename TValue> inline void Zenject::PoolableMemoryPool_2<TParam1, TValue>::OnDespawned(TValue item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::PoolableMemoryPool_2<TParam1, TValue>*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename TParam1, typename TValue> inline void Zenject::PoolableMemoryPool_2<TParam1, TValue>::Reinitialize(TParam1 p1, TValue item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::PoolableMemoryPool_2<TParam1, TValue>*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p1, item);
}
template <typename TParam1, typename TValue> inline void Zenject::PoolableMemoryPool_2<TParam1, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableMemoryPool_2<TParam1, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TParam1, typename TValue> inline ::System::Object* Zenject::PoolableMemoryPool_2<TParam1, TValue>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableMemoryPool_2<TParam1, TValue>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TValue> inline ::Zenject::InjectTypeInfo* Zenject::PoolableMemoryPool_2<TParam1, TValue>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableMemoryPool_2<TParam1, TValue>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TParam1, typename TValue> inline ::Zenject::PoolableMemoryPool_2<TParam1, TValue>* Zenject::PoolableMemoryPool_2<TParam1, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PoolableMemoryPool_2<TParam1, TValue>*>());
}
// Ctor Parameters []
template <typename TParam1, typename TValue> constexpr ::Zenject::PoolableMemoryPool_2<TParam1, TValue>::PoolableMemoryPool_2() {}
